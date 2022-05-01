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
    bool canConstruct(string ransomNote, string magazine)
    {
        std::unordered_map<char, int> letters_count;
        for(auto letter:magazine)
        {
            ++letters_count[letter];
        }
        
        for(auto eachchar:ransomNote)
        {
            if(letters_count[eachchar] == 0)
            {
                return false;
            }
            else
            {
                --letters_count[eachchar];
            }
        }
        
        return true;
    }
};

 
// Driver Code
int main()
{
    Solution sol;
    cout << sol.canConstruct("aaaa","malayalam") << endl;;

}
