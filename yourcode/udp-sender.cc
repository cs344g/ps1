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
#include "util.hh"

using namespace std;

int main( int argc, char *argv[] ) {
  const string payload = "Hello, world.";

  /* check the command-line arguments */
  if ( argc < 1 ) { abort(); } /* for sticklers */

  if ( argc != 3 ) {
    cerr << "Usage: " << argv[ 0 ] << " HOST PORT" << endl;
    return EXIT_FAILURE;
  }

  /* fetch command-line arguments */
  const string host { argv[ 1 ] }, port { argv[ 2 ] };


  /* Look up the server's address */
  cerr << "Looking up " << host << ":" << port;
  Address server(host, port);
  cerr << "Found: " << server.to_string() << endl;

  /* construct UDP socket */
  UDPSocket socket;

  /* connect the socket to the given host and port */
  cerr << "Connecting to server...";
  socket.connect(server);
  cerr << "Done" << endl;

  /* send payload */
  socket.send(payload);

  return EXIT_SUCCESS;
}
