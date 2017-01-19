/*
  udp-sender

  Given a host and port on the command line,
  this program should:

  (1) Construct a UDP socket
  (2) Connect the socket to the given host and port
  (3) Use the socket to send a payload of the
      string: "Hello, world."
*/

#include <iostream>
#include <cstdlib>

#include "socket.hh"

using namespace std;

int main( int argc, char *argv[] )
{
  /* check the command-line arguments */
  if ( argc < 1 ) { abort(); } /* for sticklers */

  if ( argc != 3 ) {
    cerr << "Usage: " << argv[ 0 ] << " HOST PORT" << endl;
    return EXIT_FAILURE;
  }

  /* fetch command-line arguments */
  const string host { argv[ 1 ] }, port { argv[ 2 ] };

  /* XXX your code here */

  /* construct UDP socket */
  UDPSocket sock = UDPSocket() ; //on construit une socket

  Address my_addr = Address("0.0.0.0",2224) ;
  sock.bind(my_addr) ;
  sock.set_reuseaddr () ;

  /* connect the socket to the given host and port */
  Address dist_addr = Address(host,port) ;
  sock.connect (dist_addr) ;

  /* send payload */
  const string message = "Hello, world.\0" ;
  sock.send(message) ;


  return EXIT_SUCCESS;
}
