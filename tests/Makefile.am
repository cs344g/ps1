AM_CPPFLAGS = $(CXX11_FLAGS) -I$(srcdir)/../src
AM_CXXFLAGS = $(PICKY_CXXFLAGS)
LDADD = ../src/libsourdough.a -lpthread

dist_check_SCRIPTS = udp-sender.test udp-receiver.test udp-end-to-end.test

TESTS = udp-sender.test udp-receiver.test udp-end-to-end.test
