#include "Thread.h"
#include <iostream>
#include <chrono>

int main()
{
    Thread myThread;
    myThread.Start(); // Start the thread

    // Your main loop
    while (true)
    {
        std::cout << "Main loop running..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    myThread.Join(); // Join the thread (this line will actually never be reached in this example)
    return 0;
}