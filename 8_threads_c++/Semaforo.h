//
// Created by fernando on 04/09/19.
//

#ifndef INC_8_THREADS_C___SEMAFORO_H
#define INC_8_THREADS_C___SEMAFORO_H
#include <mutex>
#include <condition_variable>
class Semaforo
{
private:
    std::mutex mutex_;
    std::condition_variable condition_;
    unsigned long count_;
public:
    Semaforo(unsigned long = 0);
    void post();
    void wait();
    void init(unsigned long);
};
#endif
INC_8_THREADS_C___SEMAFORO_H
