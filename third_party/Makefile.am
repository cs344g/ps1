all-local:
@BLANK@ifeq ($(srcdir),$(builddir))
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) static_cxx plugins
@BLANK@else
	cp -dR --no-preserve=mode $(srcdir)/grpc . && cd grpc && $(MAKE) $(AM_MAKEFLAGS) static_cxx plugins
@BLANK@endif

check-local:
	true
clean-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) clean

# Assuming the package knows how to install itself
install-data-local:
	true
install-exec-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) install_cxx install-plugins
uninstall-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) uninstall

EXTRA_DIST = grpc
