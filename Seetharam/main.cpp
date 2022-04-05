#include <condition_variable>
#include <iostream>
#include <thread>


using namespace std;
int global = 0;
std::mutex mu;



//std::unique_lock use the RAII pattern.
// create a local variable of type std::unique_lock passing the mutex as parameter.
//When the unique_lock is constructed it will lock the mutex, and it gets destructed it will unlock the mutex.

//race condition

int main()
{
    for(int index =0; index< 100; index++)
    {
        auto t1 = std::thread([]()
            {
            global = 1;
            
        });
        
        auto t2 = std::thread([](){
            global = 2;
            
        });
        
        t1.join();
        t2.join();
        cout << global << endl;
        std::cout  << endl;
    }
}
