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

int main( int argc, char *argv[] )
{
  /* check the command-line arguments */
  if ( argc < 1 ) { abort(); } /* for sticklers */

  if ( argc != 1 ) {
    cerr << "Usage: " << argv[ 0 ] << endl;
    return EXIT_FAILURE;
  }

  /* Raejoon Jung: your code here */
  
  /* construct UDP socket */
  UDPSocket sock = UDPSocket();

  /* "bind" the socket to host "0", port "0" */
  sock.bind(Address("0", 0)); 

  /* print out the local address to standard error (cerr) */
  /* the output should look something like "0.0.0.0 12345\n" */
  Address localaddr = sock.local_address();
  cerr << localaddr.ip() << " " << localaddr.port() << endl;
  
  /* receive one UDP datagram, and print out the payload */
  cout << sock.recv().payload;

  return EXIT_SUCCESS;
}
