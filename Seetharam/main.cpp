#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;


class Sample
{
public:
    int m_size;
    int * arr;
public:
    Sample(int psize =5):m_size(psize),arr(nullptr)
    {
        cout << "constructior is called" << endl;
        if(arr == nullptr)
        {
            arr = new int[m_size]{};
        }
        
    }
    Sample(const Sample& rsample)
    {
        cout << "copy constructor is called " << endl;
        if(this != &rsample)
        {
            m_size = rsample.m_size;
            arr = new int[m_size];
            for(int index= 0;index< m_size;index++)
            {
                arr[index] = rsample.arr[index];
            }
        }
    }
    
    Sample(Sample&& rsample)
    {
        cout << "move constructor is called" << endl;
        if(this != &rsample)
        {
            m_size = rsample.m_size;
            arr = rsample.arr;
            rsample.arr = nullptr;
        }
        
    }
    
    void print()
    {
        for(int index =0;index < m_size; index++)
        {
            std::cout << arr[index] << endl;
        }
    }
    
    ~Sample()
    {
        delete [] arr;
        arr = nullptr;
    }
};

Sample createSample()
{
    Sample sample(5);
    for(int index = 0;index < sample.m_size;index++)
    {
        sample.arr[index] = index*10;
    }
    return sample;
}

void usesample(Sample sample)
{
    sample.print();
}


int main()
{
    Sample sample = createSample();
    usesample(sample);
    
    usesample(std::move(createSample()));
    
    
    
    return 0;
}
