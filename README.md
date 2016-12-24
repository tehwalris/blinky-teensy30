# blinky-teensy30
[![Build Status](https://travis-ci.org/tehwalris/blinky-teensy30.svg?branch=master)](https://travis-ci.org/tehwalris/blinky-teensy30)

Blinky program built with Vagrant and PlatformIO for the Teensy 3.0 board

## Initial setup
 - [Install vagrant](https://www.vagrantup.com/docs/installation/)
 - Configure USB support in VirtualBox (system specific), roughly:
    - On Linux, ensure you are in the `vboxusers` group
    - Install the [Oracle extension pack](https://www.virtualbox.org/manual/ch01.html#intro-installing) 

## Usage
Plug in your Teensy and run:
 ```
 vagrant up
 vagrant ssh
 cd /vagrant
 platformio run --target upload
 ```

You can disconnect from your Vagrant VM with `exit` and reconnect with `vagrant ssh`. Use `vagrant halt`, `vagrant suspend` or `vagrant destroy` to stop the VM (see [the Vagrant doc](https://www.vagrantup.com/docs/getting-started/teardown.html)) and `vagrant up` to start it back up.

Use `platformio run` without any options (in the VM) to build without uploading (see [the PlatformIO Core doc](http://docs.platformio.org/en/latest/core.html)).

## Troubleshooting
If you have USB related issues running `vagrant up`, make sure you have the Oracle extension pack for VirtualBox installed.
