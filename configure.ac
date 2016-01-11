#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([protobuf-test], [0.1], [keithw@cs.stanford.edu])
AM_INIT_AUTOMAKE([foreign tar-ustar])
AC_CONFIG_SRCDIR([src/address.hh])
AC_CONFIG_HEADERS([config.h])

BLANK=''; AC_SUBST(BLANK)

# Add picky CXXFLAGS
CXX11_FLAGS="-std=c++11 -pthread"
PICKY_CXXFLAGS="-pedantic -Wall -Wextra -Weffc++ -Werror"
AC_SUBST([CXX11_FLAGS])
AC_SUBST([PICKY_CXXFLAGS])

# Checks for programs.
AC_PROG_CXX
AC_PROG_RANLIB

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile third_party/Makefile src/Makefile protobufs/Makefile yourcode/Makefile])
AC_OUTPUT
