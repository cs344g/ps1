/*
  udp-receiver

  This program should:

  (1) Construct a UDP socket
  (2) Bind its local address to host "0", port "0".
      (This allows the kernel to allocate any unused port number.)
  (3) Print out to standard error (std::cerr) the local address that
      the socket was bound to, in this format: "IP portno\n"
  (4) Receive one UDP datagram on the socket, and print out the payload
      to standard output (std::cout).
*/

#include <iostream>
#include <cstdlib>

#include "socket.hh"

using namespace std;

int main( int argc, char *argv[] ) {
  /* check the command-line arguments */
  if ( argc < 1 ) { abort(); } /* for sticklers */

  if ( argc != 1 ) {
    cerr << "Usage: " << argv[ 0 ] << endl;
    return EXIT_FAILURE;
  }

  /* Binds to local address 0:0 */
  Address local("0", "0");

  /* construct UDP socket */
  UDPSocket socket;

  /* allow local address to be reused sooner, at the cost of some robustness */
  socket.set_reuseaddr();

  /* "bind" the socket to host "0", port "0" */
  socket.bind(local);

  /* print out the local address to standard error (cerr) */
  cerr  << socket.local_address().ip() << " "
        << socket.local_address().port() << endl;

  /* receive one UDP datagram, and print out the payload */
  UDPSocket::received_datagram data = socket.recv();

  /* Output the payload to std::cout */
  cout << data.payload;

  return EXIT_SUCCESS;
}
