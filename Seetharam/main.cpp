//
//  main.cpp
//  Seetharam
//
//  Created by Seetharaman Rajagopal on 03/04/22.
//

#include <iostream>
#include <memory.h>

using namespace std;

namespace sorting
{
    template <typename T>
    void swapit(T& a,T& b)
    {
        auto empty = a;
        a = b;
        b = empty;
    }
    
    void printme( int arr[], int size)
    {
        for(int index =0;index< size; index++)
        {
            cout<< arr[index] << " ";
        }
        cout << endl;
        
        
    }
    //
    //Compare minimum with the second element.
    //If the second element is smaller than minimum, assign the second element as minimum.

    void selectionSort(int array[], int size) {
      for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {

          // To sort in descending order, change > to < in this line.
          // Select the minimum element in each loop.
          if (array[i] < array[min_idx])
            min_idx = i;
        }

        // put min at the correct position
        swapit(array[min_idx], array[step]);
      }
    }
}

int main(int argc, const char * argv[])
{
    int arr[] = {1,23,123,3,1,2,123,123,23};
    int size  = sizeof(arr)/sizeof(int);
    cout << size << endl;
    sorting::selectionSort(arr,size);
    sorting::printme(arr,size);

    cout << endl;
    return 0;
}
