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

  /* Pan Hu your code here  */
  
  /* construct UDP socket */
  UDPSocket socket;

  /* connect the socket to the given host and port */
  socket.connect( Address(host, port) );

  /* send payload */
  socket.send("Hello, world.");

  return EXIT_SUCCESS;
}
