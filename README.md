# TimerThread
One Timer per Thread based on timerfd

# Install Boost
sudo apt-get install libboost-dev libboost-test-dev

# Compile
g++ main.cpp Thread.cpp Timer.cpp TimerThread.cpp -std=c++11 -lpthread

# Comment
每一个timer都会起一个线程使用poll去等待，没有使用到poll的多路复用。
