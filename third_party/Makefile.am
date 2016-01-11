all-local:
@BLANK@ifeq ($(srcdir),$(builddir))
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) all
@BLANK@else
	cp -dR --no-preserve=mode $(srcdir)/grpc . && cd grpc && $(MAKE) $(AM_MAKEFLAGS) all
@BLANK@endif

check-local:

clean-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) clean

# Assuming the package knows how to install itself
install-data-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) install-data
install-exec-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) install-exec
uninstall-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) uninstall

EXTRA_DIST = grpc
