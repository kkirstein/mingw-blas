# mingw-blas

This projects contains the reference __BLAS__ library with an adjusted `Makefile` for the mingw64 toolchain. It generates both static and shared variants of __BLAS__.


## BLAS

Currently, version 3.6.0 of the [BLAS](http://www.netlib.org/blas/index.html) library is used.


## BUILD & INSTALL

1. Check and edit if necessary `make.inc`

2. `make all`

3. Copy the generated library files (`libblas.a`, `libblas.dll.a` and `libblas.dll`) to the desired folders.

## TODO

* add switches to compile for either `x86_64` or `i686` architecture.
* implement `make install`


## License

__BLAS__ uses a very liberal open-source license. Details can be found [here](http://www.netlib.org/blas/index.html#_licensing).

