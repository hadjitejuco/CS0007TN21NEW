/******************************************************************************

STACKS 

LIFO 

operations
   push 
   pop 
   top
   empty 
   
library. -> stack 


*******************************************************************************/

#include <iostream>
#include <stack> 
using namespace std;

int main()
{
    stack<int> nums;
    cout << "stack size " << nums.size() << endl; 
    //push -> insert data
    nums.push(11);
    nums.push(22);
    nums.push(33);
    cout << "stack size " << nums.size() << endl; 
    cout << "Top " << nums.top() << endl;
    // nums.pop();
    // cout << "stack size " << nums.size() << endl; 
    // cout << "Top " << nums.top() << endl;
    for (int i=nums.size(); i>0; i--){
        int x=nums.top();
        cout << x << endl;
        nums.pop();
    }
    cout << "stack size " << nums.size() << endl; 
    return 0;
}
