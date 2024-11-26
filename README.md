# Autotools template for C

This is a working and customizable template for C project using autotools.

The template includes several most needed features and it can be easily tweaked.

Features included in the template are:

* template code is vanilla C but C++ compiler is used
* Multi program and multi library
* program 1 (`prog1`) self contained, no library used
* program 2 (`prog2`) using 2 internal project libraries
* 1 Internal convenience library (just for organizational purposes) (`lib1`)
* 1 Shared Library (`lib2`)
* An external linked library (`ncurses`) used by the shared library. `ncurses` must be present available in order to compile the template as it is (`sudo apt-get install libncurses5-dev`)
* C program is statically linked to the internal library and dynamically linked to the installable one
* Program files and library files are organized into separate dirs
* Libtool is used
* Separate folders are used for:
    * build
    * m4 macros
    * src files
    * auxiliary autotool files
* `INSTALL NEWS COPYING AUTHORS ChangeLog README` files are not needed
* `.gitignore` excludes the automatically generated files

# For developers

## Customize the template package
* `git clone` the repo
* customize `configure.ac` and `Makefile.am` (optional)
* run `autoreconf -i`

## build the package
```
mkdir build && cd build
../configure
make
```

## To also make a tarball of source package
```
make dist
```
source distribution will be tarballed into `<new project name>-<version>.tar.gz`

# For the package user
## Build package

```
tar zxvf <new project name>-<version>.tar.gz
./configure
make
```

## Run programs

```
./prog1
./prog2
```
