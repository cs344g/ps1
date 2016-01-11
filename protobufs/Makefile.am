source = simple.proto

AM_CPPFLAGS = $(protobuf_CFLAGS)

SUFFIXES = .proto .pb.cc

.proto.pb.cc:
	$(AM_V_GEN)$(PROTOC) --cpp_out=. -I$(srcdir) $<

noinst_LIBRARIES = libsimpleprotos.a

libsimpleprotos_a_SOURCES = $(source)
nodist_libsimpleprotos_a_SOURCES = $(source:.proto=.pb.cc) $(source:.proto=.pb.h)

BUILT_SOURCES = $(source:.proto=.pb.cc)
CLEANFILES = $(source:.proto=.pb.cc) $(source:.proto=.pb.h)
