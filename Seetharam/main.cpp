#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;




int main()
{
    int ** p = nullptr;
    
    p = new int*[3];
    
    p[0] =  new int [4];
    p[1] = new int [4];
    p[2] = new int[4];
    
    for(int index =0;index< 3;index++)
    {
        for(int subindex =0; subindex < 4;subindex++)
        {
            p[index][subindex] = index* 10 + subindex;
        }
    }
    
    cout << p[1][2] << endl;
    cout << *(*(p+1)+2) << endl;
    
    
    return 0;
}
