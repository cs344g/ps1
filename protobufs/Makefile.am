source = simple.proto

SUFFIXES = .proto .grpc.pb.cc .pb.cc
AM_CPPFLAGS = $(CXX11_FLAGS) -I$(srcdir)/../third_party/grpc/third_party/protobuf/src -I$(srcdir)/../third_party/grpc/include
PROTOC = ../third_party/grpc/bins/opt/protobuf/protoc
PLUGIN = ../third_party/grpc/bins/opt/grpc_cpp_plugin

.proto.pb.cc:
	$(AM_V_GEN)$(PROTOC) --cpp_out=. -I$(srcdir) $<

.proto.grpc.pb.cc:
	$(AM_V_GEN)$(PROTOC) --grpc_out=. -I$(srcdir) --plugin=protoc-gen-grpc=$(PLUGIN) $<

noinst_LIBRARIES = libsimpleprotos.a

libsimpleprotos_a_SOURCES = $(source)
nodist_libsimpleprotos_a_SOURCES = $(source:.proto=.pb.cc) $(source:.proto=.pb.h) $(source:.proto=.grpc.pb.cc) $(source:.proto=.grpc.pb.h) 

BUILT_SOURCES = $(source:.proto=.pb.cc) $(source:.proto=.grpc.pb.cc)
CLEANFILES = $(source:.proto=.pb.cc) $(source:.proto=.pb.h) $(source:.proto=.grpc.pb.cc) $(source:.proto=.grpc.pb.h)
