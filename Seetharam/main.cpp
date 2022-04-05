#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>


using namespace std;
int global = 0;
std::mutex mu;


//int globalnumber = 0;
std::atomic<int> globalnumber = 0;



// add numbers from 0 10000 using global variable
// function add 1-100
// 100 thread adds does the same

void incrementHundred()
{
    for(int index =0; index< 100;index++)
    {
        globalnumber++;
    }
}

int main()
{
    std::vector<std::thread> addingtheads;
    for(int index = 0;index <100;index++)
    {
        auto t = std::thread(incrementHundred);
        addingtheads.push_back(std::move(t));
        
    }
    
    for(auto& eachth : addingtheads)
    {
        eachth.join();
    }
    
    cout << globalnumber << endl;
}
