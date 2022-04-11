#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;

namespace seetha
{
    int strlengthwithoutnull(const char* name)
    {
        int count = 0;
        while(name[count] != '\0')
        {
            count++;
        }
        return  count;
    }

    void reverse(char* str)
    {
        int startindex = 0;
        int endindex = strlengthwithoutnull(str) -1;
        while(startindex <= endindex)
        {
            auto temp = str[startindex];
            str[startindex] = str[endindex];
            str[endindex] = temp;
            startindex++;
            endindex--;
        }
        cout << str << endl;
    }
}

int main()
{
    int sizeofstr = seetha::strlengthwithoutnull("seetha");
    cout << sizeofstr << endl;
    char * name = new char[sizeofstr+1];
    strcpy(name, "seetha");
    seetha::reverse(name);
    return 0;
}
