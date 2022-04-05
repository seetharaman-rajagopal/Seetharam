#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>


using namespace std;



void printme(int arr[], int size)
{
    for(int index =0; index < size;index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
}

template<typename  T>
void swapme(T& a, T &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int nsize)
{
    for (int index =0; index < nsize;index++)
    {
        for(int subindex = 0; subindex < nsize -(1 + index) ; subindex++)
        {
            cout << "subindex " << subindex +1 << endl;
            if(arr[subindex] > arr[subindex+1])
            {
                swapme(arr[subindex], arr[subindex+1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {1,22,2,222,2};
    int narraysize = sizeof(arr)/sizeof(int);
    cout << "array size is " << narraysize << endl;
    bubblesort(arr,narraysize);
    printme(arr,narraysize);
    cout << endl;
}
