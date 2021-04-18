#ifndef CPPTIMER_CPPTIMER_H
#define CPPTIMER_CPPTIMER_H
#include <chrono>
#include <iostream>

class cppTimer{
private:
    std::chrono::time_point<std::chrono::steady_clock> *start;
    std::chrono::time_point<std::chrono::steady_clock> *finish;
public:
    //automatically starts timer
    cppTimer();
    //we dont need to copy timers
    cppTimer(cppTimer &that) = delete;

    inline void startTimer();
    inline void stopTimer();
    inline void printTime();

    //automatically stops the timer when the timer object goes out of scope - timer object gets destroyed
    ~cppTimer();
};
#endif //CPPTIMER_CPPTIMER_H
