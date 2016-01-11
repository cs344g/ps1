AM_CPPFLAGS = $(CXX11_FLAGS) $(ZLIB_CFLAGS) -I$(srcdir)/../src -I../protobufs -isystem ../third_party/grpc/third_party/protobuf/src -isystem ../third_party/grpc/include
AM_CXXFLAGS = $(PICKY_CXXFLAGS)
LDADD = ../src/libsourdough.a ../protobufs/libsimpleprotos.a ../third_party/grpc/libs/opt/protobuf/libprotobuf.a ../third_party/grpc/libs/opt/libgrpc++_unsecure.a ../third_party/grpc/libs/opt/libgrpc_unsecure.a ../third_party/grpc/libs/opt/libgpr.a $(ZLIB_LIBS) -lpthread

bin_PROGRAMS = greeter_client greeter_server

greeter_client_SOURCES = greeter_client.cc

greeter_server_SOURCES = greeter_server.cc
