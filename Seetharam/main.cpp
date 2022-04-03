//
//  main.cpp
//  Seetharam
//
//  Created by Seetharaman Rajagopal on 03/04/22.
//

#include <iostream>




using namespace std;

int main(int argc, const char * argv[])
{
    auto lambda = []()
    {
        cout << "This is empty lambda function" << endl;
    };
    
    lambda();
    
    

    std::cout << "Hello, World!\n";
    return 0;
}
