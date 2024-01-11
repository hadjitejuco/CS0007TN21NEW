
#include <iostream>
using namespace std;
//prototype
int sumIterative(int n);
int sumRecursive(int n);

int main()
{
    cout << "Iterative approach\n";
    cout << sumIterative(5) << endl;

    cout << "Recursive approach\n";
    cout << sumRecursive(5) << endl;

    return 0;
}

int sumIterative(int n)
{
    //iteration 
    int result = 0;
    for (int i = 1; i<=n; i++) {
        result += i;
    }
    return result;
    
}
int sumRecursive(int n) //5
{
    //base case 
    if (n==1) return 1;
    return n + sumRecursive(n-1);
    
    
}
