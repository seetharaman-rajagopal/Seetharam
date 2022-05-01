#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include<iomanip>
#include<map>
#include <stack>
#include<unordered_map>

using namespace std;

#include<string>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num)
    {
        auto count  =0;
        while (num !=0) {
            if(num % 2 == 0)
            {
               num = (int)num/2;
            }
            else
            {
                num = num -1;
            }
            count++;
        }
        return count;
    }
};
 
// Driver Code
int main()
{
    Solution sol;
    cout << sol.numberOfSteps(400) << endl;;

}
