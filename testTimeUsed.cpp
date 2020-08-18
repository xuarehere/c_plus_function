
#include <iostream>
#include <chrono>
using namespace std;  
#include <unistd.h>


void function()
{
    usleep(2000); //单位是微秒 1000us = 1ms.  
//     usleep(1000000); //单位是微秒 1000000us = 1s
    sleep(2);

}

int main()
{
    auto startTime = std::chrono::steady_clock::now();

    // test function
    function();
    
    auto finishTime = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finishTime - startTime);
    float durationTime = duration.count();
    std::cout << "time: "<< duration.count() << " ms" << std::endl;
}
