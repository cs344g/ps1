AM_CPPFLAGS = $(CXX11_FLAGS) -I$(srcdir)/../src -I../protobufs -isystem ../third_party/grpc/third_party/protobuf/src -isystem ../third_party/grpc/include
AM_CXXFLAGS = $(PICKY_CXXFLAGS)
LDADD = ../src/libsourdough.a ../protobufs/libsimpleprotos.a ../third_party/grpc/libs/opt/protobuf/libprotobuf.a ../third_party/grpc/libs/opt/libgrpc++_unsecure.a -lpthread

bin_PROGRAMS = udp-sender udp-receiver

udp_sender_SOURCES = udp-sender.cc

udp_receiver_SOURCES = udp-receiver.cc
