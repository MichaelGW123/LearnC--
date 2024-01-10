#include "Thread.h"
#include <chrono>

Thread::Thread() : n{0} {}
Thread::~Thread()
{
    if (thread.joinable())
    {
        thread.join();
    }
}
void Thread::Initialize()
{
    while (true)
    {
        n++;
        std::cout << "N is : " << n << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
void Thread::Start()
{
    thread = std::thread(&Thread::Initialize, this);
}
void Thread::Join()
{
    thread.join();
}
void Thread::SetN(int set)
{
    n = set;
}
int Thread::GetN()
{
    return n;
}