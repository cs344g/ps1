source = simple.proto

SUFFIXES = .proto .pb.cc
AM_CPPFLAGS = -I$(srcdir)/../third_party/grpc/third_party/protobuf/src
PROTOC = ../third_party/grpc/bins/opt/protobuf/protoc

.proto.pb.cc:
	$(AM_V_GEN)$(PROTOC) --cpp_out=. -I$(srcdir) $<

noinst_LIBRARIES = libsimpleprotos.a

libsimpleprotos_a_SOURCES = $(source)
nodist_libsimpleprotos_a_SOURCES = $(source:.proto=.pb.cc) $(source:.proto=.pb.h)

BUILT_SOURCES = $(source:.proto=.pb.cc)
CLEANFILES = $(source:.proto=.pb.cc) $(source:.proto=.pb.h)
