< Installing gtest >
1. First of all, you need to install gtest package.
   sudo apt-get install libgtest-dev
2. Build gtest lib.
   /usr/src/gtest
   sudo cmake .
   sudo make
   sudo cp *.a /usr/lib

< Running gtest >
1. Makefile has the rule named "test". It runs gtest.
   make test
