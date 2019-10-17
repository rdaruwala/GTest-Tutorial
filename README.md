# GTest-Tutorial
Quick GTest Tutorial for Badgerloop

# Prereqs

This assumes you're using a debian-based Linux install.

First, update your system:

```
sudo apt-get update
sudo apt-get upgrade
```

Next, install the required dependencies:

```
sudo apt-get install git cmake libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
```

If at this point an error occurs, you might not have the gcc (c compiler) installed on your linux.
To install gcc, run:

```
sudo apt-get install build-essential
```

If there were no problems, move on.

```
sudo make

sudo cp *.a /usr/lib
```


# How to build (once complete)

```
mkdir build
cd build
cmake ../
make
./runTests
```

If the commands above produce errors, try running them with sudo before them.
(e.g. sudo cmake ../)

Also, if make doesn't work, try going to the directory with the Makefile in it. (So in this case, you might want to do cd .. before make.)
