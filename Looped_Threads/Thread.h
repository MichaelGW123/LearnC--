#ifndef SAMPLE_H
#define SAMPLE_H

#include <thread>
#include <iostream>

class Thread
{
public:
    Thread();
    ~Thread();
    void SetN(int set);
    int GetN();
    void Start();
    void Join();

private:
    int n;
    std::thread thread;
    void Initialize();
};

#endif