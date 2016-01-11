all-local:
@BLANK@ifeq ($(srcdir),$(builddir))
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) static_c static_cxx plugins
@BLANK@else
	cp -dR --no-preserve=mode --preserve=timestamps $(srcdir)/grpc . && cd grpc && $(MAKE) $(AM_MAKEFLAGS) static_c static_cxx plugins
@BLANK@endif

check-local:
	true
clean-local:
	cd grpc && $(MAKE) $(AM_MAKEFLAGS) clean

# Assuming the package knows how to install itself
install-data-local:
	true
install-exec-local:
	true
uninstall-local:
	true

EXTRA_DIST = grpc
