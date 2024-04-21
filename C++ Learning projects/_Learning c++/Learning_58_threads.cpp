#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <mutex>

//std::move; // can be used to move a thread into a new var, but it must be not joined or detached 

std::mutex mutex;

auto getThreadInfo()
{
    return std::thread::hardware_concurrency();
}

void ThreadTest()
{
    std::cout << "This is THREAD!\n";
}

void ThreadYield()
{

    
}

void ThreadAddValue(std::string& value)
{
    //mutex.lock();
    std::lock_guard<std::mutex> lock{mutex}; // this is basically a macros that's gonna call a constructor and destructor
    value += " || this line was modified in function";
    std::this_thread::yield(); // yielding a time quant to the other thread
    std::this_thread::sleep_until(std::chrono::steady_clock::now() + std::chrono::milliseconds(15));
    //std::cout << "Thread ID: " << std::this_thread::get_id() << '\n'; // this returns an ID of the thread but with no sync it's a mess
    //std::cout << value << '\n';
    //mutex.unlock(); 
} // lock guard will automatically delete the mutex here 

void GetThreadIDSynced()
{
    std::lock_guard<std::mutex> lock{mutex}; // basically it's going to slow down a program to wait until it's finished
    std::cout << "Thread ID: " << std::this_thread::get_id() << '\n';
}

int main ()
{
    int conc = getThreadInfo();
    std::string strpass = "This is a string to pass";
    if (conc > 0)
    {
        std::cout << "Number of threads: " << conc << '\n';
    }
    else
    {
        conc = 4;
        std::cout << "Couldn't figure out system specs. Setting number of to the default: " << conc << '\n';
    }

    

    ThreadTest();
    ThreadAddValue(strpass);
    std::cout << strpass << '\n';

    std::thread tr1 (ThreadTest);
    tr1.join(); // join guarantees that the thread will be executed before going out of scope

    strpass = "This string is refreshed ";
    std::thread tr2 (ThreadAddValue, std::ref(strpass)); // ref is used for referencing a value, it seems like in the new standard you can't pass by reference in a thread, it does not compile
    tr2.detach(); // using detach here will most likely result in passing an invalid reference, which ends up in incorrectly working function
    std::cout << strpass << '\n';

    strpass = "This string is refreshed ";
    std::thread tr3 (ThreadAddValue, std::ref(strpass));
    tr3.join();
    std::cout << strpass << '\n';

    std::vector<std::thread> threads;
    for (int i = 1; i <= 3; i++)
    {
        strpass = "This looped string is refreshed " + std::to_string(i);
        threads.push_back (std::thread{ThreadAddValue, std::ref(strpass)});
        std::cout << strpass << std::endl;
    }
    //so it seems that this loop will return the same string most of the time
    //the reason for that I believe that the loop works faster than the operation in thread so it simply can't keep up with the update
    //cout is called before the adding is done in another thread

    for (int i = 1; i <= 25; i++)
    {
        threads.push_back (std::thread{GetThreadIDSynced});
    }

    for(auto &thread : threads) //this will only work with adress-of operator
    {
        if (thread.joinable())
        {
            thread.join();
        }
    }


    return 0;
}