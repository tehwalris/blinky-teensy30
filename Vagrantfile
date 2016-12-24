Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64"

  config.vm.provider "virtualbox" do |vb|
    # Customize the amount of memory on the VM:
    vb.memory = "1024"
    vb.customize ["modifyvm", :id, "--usb", "on"]
    vb.customize ["modifyvm", :id, "--usbehci", "on"]
    vb.customize ["usbfilter", "add", "0", 
      "--target", :id, 
      "--name", "TeensySerial",
      "--vendorid", "0x16c0",
      "--productid", "0x0483"]
    vb.customize ["usbfilter", "add", "1", 
      "--target", :id, 
      "--name", "TeensyBootloader",
      "--vendorid", "0x16c0",
      "--productid", "0x0478"]
  end

  config.vm.provision "shell", inline: <<-SHELL
    apt-get update
    apt-get install -y python-pip
    pip install -U platformio
    sudo sh -c 'curl https://raw.githubusercontent.com/platformio/platformio-core/b51f1f18b6dce6ea12685a358f27ecb906f75e2f/scripts/99-platformio-udev.rules > /etc/udev/rules.d/99-platformio-udev.rules' &> /dev/null
    sudo service udev restart
    platformio update
  SHELL
end
