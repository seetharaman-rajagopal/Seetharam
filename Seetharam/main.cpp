#include <condition_variable>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include<iomanip>

using namespace std;



class Node
{
public:
    Node(int pdata):data(pdata),next(nullptr)
    {
        
    }
    Node* next;
    int data;
};

class Linklist
{
private:
    Node* head = nullptr;
    Node* tail = nullptr;
public:
    bool detect_if_linear()
    {
        Node* current = head;
        Node* jumperNode = head;
        bool bCircular = false;
        while (current != nullptr)
        {
            if( current == jumperNode)
            {
                bCircular = true;
                break;
            }
            current = current->next;
            if(jumperNode != nullptr)
            {
                jumperNode = jumperNode->next;
                if(jumperNode != nullptr)
                {
                    jumperNode = jumperNode->next;
                }
            }
        }
    
        return  bCircular;
      }
};


int main()
{
    
    
    cout << endl;
   
    return 0;
}
