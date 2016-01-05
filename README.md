CS 344G Warm-up 1
#################

Your mission, should you choose to accept it, is to make a simple UDP
sender that sends a datagram containing the payload "Hello, world.",
and a UDP receiver that prints out the payload of the first datagram
it receives.

Suggested platform: Recent GNU/Linux with g++ 4.8 or later. You may
need to set up a VM. (The code may also run on OS X.)

0. Initialize the build system with: `./autogen.sh && ./configure`

1. Compile the template code with: `$ make`

2. Run the tests with: `$ make check`

   You will see that they all fail.

3. Edit the files `yourcode/udp-sender.cc` and `yourcode/udp-receiver.cc`
   per the instructions in each file, using the `Socket` and `Address` objects.
   You may need to look at `src/socket.hh` and `src/address.hh` for these APIs.

4. When the tests pass locally, push your version to GitHub and open a pull request.
