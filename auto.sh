sudo apt-get -y install build-essential libssl-dev autotools-dev automake pkg-config libevent-dev libboost-all-dev libevent-dev bsdmainutils
sudo apt-get -y install libdb-dev
sudo apt-get -y install libdb++-dev

sudo chmod u+x -R ./*

sudo dd if=/dev/zero of=/swapfile bs=500M count=4
sudo chmod 600 /swapfile
sudo mkswap /swapfile
sudo swapon /swapfile

./autogen.sh && ./configure --with-incompatible-bdb CXXFLAGS="-DTESTING" && make