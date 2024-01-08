/******************************************************************************

linear search / seqeuncial search 

if x is found
    location of x 
of x is not found
    return -1

*******************************************************************************/

#include <iostream>
using namespace std;
//prototype 
int linearSearch(int arr[], int size, int x);

int main()
{
    //array 
    int arr[]={2,3,0,1,9,5,8,3,7,6};
    //size of the array. 
    int n = sizeof(arr) / sizeof(arr[0]);
    //search the var 
    int x;
    
    cout << "Enter number to search ";
    cin >> x;
    
    cout << "Starting linear search ";
    int result = linearSearch(arr, n, x);
    
    //found i not found -1
    if (result==-1)
        cout << "element is not present in the array \n";
    else
        cout << "element found at index " << result << endl;
    return 0;
}

int linearSearch(int arr[], int size, int x) {
    for (int i = 0; i<size; i++){
        if (arr[i]==x) {
            cout << "Match found\n";
            return i;
        }else {
            cout << "No match\n";
            
        }
    }
    return -1;
}
