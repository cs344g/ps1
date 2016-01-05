AM_CPPFLAGS = $(CXX11_FLAGS) -I$(srcdir)/../src
AM_CXXFLAGS = $(PICKY_CXXFLAGS)
LDADD = ../src/libsourdough.a -lpthread

bin_PROGRAMS = udp-sender udp-receiver

udp_sender_SOURCES = udp-sender.cc

udp_receiver_SOURCES = udp-receiver.cc
