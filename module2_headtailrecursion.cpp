/******************************************************************************
head / tail recursion
*******************************************************************************/

#include <iostream>
using namespace std;
//prototype
void headRecursion(int height);
void tailRecursion(int height);

int main()
{
    cout << "head recursion"<<endl;
    headRecursion(5);
    
    cout << "tail recursion"<<endl;
    tailRecursion(5);

    return 0;
}
void headRecursion(int height)
{
    //base case
    if (height==0) return;
    
    headRecursion(height-1);
    cout << height << endl;
    
}
void tailRecursion(int height)
{
     //base case
    if (height==0) return;
    cout << height << endl;
    tailRecursion(height-1);
}
