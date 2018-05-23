# Building

Prerequisites: You will need `libusb-1.0` and [CMake](http://www.cmake.org/) installed.
You will also need [QT 5.7](https://www.qt.io/download-open-source/) or newer.
This project runs on only on Ubuntu 16.04

# Installing libusb
    sudo apt-get install libusb-1.0-0-dev

# Installing CMake
    Please follow the instructions at -> https://cmake.org/install/


This project uses a modified version of `libuvc` for camera image download and control. Even if
you have `libuvc` on your system already, you will have to build the fork.


## Get the source code

    git clone https://github.com/prat96/GetThermal.git
    cd GetThermal

## Get libuvc and build

To build the `libuvc` fork, you can run these shell commands:

    git submodule init
    git submodule update
    pushd libuvc
    mkdir build
    cd build
    cmake ..
    make
    popd

## Build GetThermal

GetThermal is a QT qmake project. So all you have to do now is fire up QTCreator, open the project file,
and hit run.


### TroubleShooting

In case feed is unavaliable and UVC access deined error occurs in console, enter in Terminal;

sudo sh -c "echo 'SUBSYSTEMS==\"usb\", ATTRS{idVendor}==\"1e4e\", ATTRS{idProduct}==\"0100\", SYMLINK+=\"pt1\", GROUP=\"usb\", MODE=\"666\"' > /etc/udev/rules.d/99-pt1.rules"

AND reboot system.
