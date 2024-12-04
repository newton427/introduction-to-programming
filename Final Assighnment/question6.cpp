#include <iostream>
#include <chrono>
#include <thread>

void trafficLight(int seconds) {
    int color = (seconds % 15) / 5; // Every 5 seconds changes light

    switch(color) {
        case 0:
            std::cout << "The light is RED" << std::endl;
            break;
        case 1:
            std::cout << "The light is YELLOW" << std::endl;
            break;
        case 2:
            std::cout << "The light is GREEN" << std::endl;
            break;
    }
}

int main() {
    for(int i = 0; i < 30; ++i) { // Run for 30 iterations
        trafficLight(i);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}