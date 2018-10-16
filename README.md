# TimerThread
One Timer per Thread

# Install Boost
sudo apt-get install libboost-dev libboost-test-dev

# Compile
g++ main.cpp Thread.cpp Timer.cpp TimerThread.cpp -std=c++11 -lpthread
