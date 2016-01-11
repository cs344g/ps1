#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([cs344g-warmup1], [1.0], [keithw@cs.stanford.edu])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([src/address.hh])
AC_CONFIG_HEADERS([config.h])

# Add picky CXXFLAGS
CXX11_FLAGS="-std=c++11 -pthread"
PICKY_CXXFLAGS="-pedantic -Wall -Wextra -Weffc++ -Werror"
AC_SUBST([CXX11_FLAGS])
AC_SUBST([PICKY_CXXFLAGS])

# Checks for programs.
AC_PROG_CXX
AC_PROG_RANLIB

AC_PATH_PROG([PROTOC], [protoc], [])
AS_IF([test x"$PROTOC" = x],
  [AC_MSG_ERROR([cannot find protoc, the Protocol Buffers compiler])])

# Checks for libraries.
PKG_CHECK_MODULES([PROTOBUF], [protobuf])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile src/Makefile protobufs/Makefile yourcode/Makefile tests/Makefile])
AC_OUTPUT
