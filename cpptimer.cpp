#include "cpptimer.h"

cppTimer::cppTimer() {
    startTimer();
}
cppTimer::~cppTimer() {
    stopTimer();
    printTime();
}

void cppTimer::startTimer() {
    start = std::chrono::high_resolution_clock::now();
    finish = start;
}
void cppTimer::stopTimer() {
    finish = std::chrono::high_resolution_clock::now();
}
void cppTimer::printTime() {
    std::cout << "Time taken ";
    if (finish == start) {
        std::cout << std::chrono::duration<float>(finish - start).count();
    }
    else {
        auto time_now = std::chrono::high_resolution_clock::now();
        std::cout << std::chrono::duration<float>(time_now - start).count();
    }
    std::cout << " s" << std::endl;
}
