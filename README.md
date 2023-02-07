# XQilla

This is XQilla, a C++ implementation of XQuery and XPath 2.0 based on Xerces-C.

I DO NOT OWN or CREATED this library.
This is a fork from https://sourceforge.net/projects/xqilla/


## Build Instructions

1. Download a source distribution of Xerces-C 3.2.1
2. Build Xerces-C

cd xerces-c-3.2.1/
./configure
make

4. Build XQilla

cd xqilla/
./configure --with-xerces=`pwd`/../xerces-c-3.2.1/
make
