#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

void printme(int arr[], int size)
{
    for(int index =0; index < size;index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
}

//template<typename  T>
//void swapme(T& a, T &b)
//{
//    auto temp = a;
//    a = b;
//    b = temp;
//}

void bubblesort(int arr[], int nsize)
{
    auto swapme = [](int& a, int& b)
    {
        auto temp = a;
        a = b;
        b = temp;
    };
    for (int index =0; index < nsize;index++)
    {
        for(int subindex = 0; subindex < nsize -(1 + index) ; subindex++)
        {
            if(arr[subindex] > arr[subindex+1])
            {
                swapme(arr[subindex], arr[subindex+1]);
            }
        }
    }
}

int main()
{
    int arr[5] {};
    int narraysize = sizeof(arr)/sizeof(int);
    auto var = time(NULL);
    srand(var);
    for(int index = 0; index < narraysize; index++)
    {
        arr[index] = rand()%100;
    }
    cout << "array size is " << narraysize << endl;
    printme(arr,narraysize);
    bubblesort(arr,narraysize);
    printme(arr,narraysize);
    cout << endl;
}
