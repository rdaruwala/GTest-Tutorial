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
