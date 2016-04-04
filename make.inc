####################################################################
#  BLAS make include file.                                         #
#  March 2007                                                      #
####################################################################
#
SHELL = /bin/sh
#
#  The machine (platform) identifier to append to the library names
#
PLAT = _WIN64
LLIBEXT = dll
#  
#  Modify the FORTRAN and OPTS definitions to refer to the
#  compiler and desired compiler options for your machine.  NOOPT
#  refers to the compiler options desired when NO OPTIMIZATION is
#  selected.  Define LOADER and LOADOPTS to refer to the loader and 
#  desired load options for your machine.
#
FORTRAN  = /usr/bin/x86_64-w64-mingw32-gfortran
OPTS     = -O3
DRVOPTS  = $(OPTS)
NOOPT    =
LOADER   = /usr/bin/x86_64-w64-mingw32-gfortran
LOADOPTS = -O3
#
#  The archiver and the flag(s) to use when building archive (library)
#  If you system has no ranlib, set RANLIB = echo.
#
ARCH     = /usr/bin/x86_64-w64-mingw32-ar
ARCHFLAGS= cr
RANLIB   = /usr/bin/x86_64-w64-mingw32-ranlib
#
#  The location and name of the Reference BLAS library.
#
BLASLIB      = libblas.a
