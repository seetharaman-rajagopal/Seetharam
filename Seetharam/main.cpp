#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include<iomanip>
#include<map>

using namespace std;

//https://www.youtube.com/watch?v=QN9hnmAgmOc&t=139s
 
#include<iostream>

using namespace std;

class Solution {
public:
    
    int getvalue(char letter)
    {
        switch(letter)
        {
            case 'I':
                {
                    return 1;
                }
            case 'V':
                {
                    return 5;
                }
            case 'X':
                {
                    return 10;
                }
            case 'L':
                {
                    return 50;
                }
            case 'C':
                {
                    return 100;
                }
            case 'D':
                {
                    return 500;
                }
            case 'M':
                {
                    return 1000;
                }
            default:
                return 0;
            
        }
    }
    
    
//    int romanToInt(string s)
//    {
//        int out{};
//        char current_letter{};
//        char next_letter{};
//        int next{}, current{};
//        for(int index =0;  index < s.length();index++)
//        {
//            current_letter = s[index];
//            next_letter = s[index+1];
//            current = getvalue(current_letter);
//            next = getvalue(next_letter);
//            if((current >= next))
//            {
//                out = out + current;
//            }
//            else
//            {
//                out = out + next -current;
//                index = index +1;
//            }
//        }
//        return out;
//    }
    
    int romanToInt(string s) {
            map<char, int> values;
            values['I'] = 1;
            values['V'] = 5;
            values['X'] = 10;
            values['L'] = 50;
            values['C'] = 100;
            values['D'] = 500;
            values['M'] = 1000;
            
            int last = s.length()-1;
            int ans = values[s[last]];
            
            for(int i = last-1; i>= 0; i--)
            {
                if(values[s[i]] < values[s[i+1]])
                {
                    ans-= values[s[i]];
                }
                else
                {
                    ans+= values[s[i]];
                }
            }
            
            return ans;
        }
};
 
// Driver Code
int main()
{
    Solution sol;
    cout << sol.romanToInt("MCMXCIV") << endl;;

}
