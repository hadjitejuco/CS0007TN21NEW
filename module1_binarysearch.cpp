/******************************************************************************

binary linearSearch

middle = left + right - left / 2

find the mid point 
> +1 x 
< -1 x 

*******************************************************************************/

#include <iostream>
using namespace std;
//prototype 
int binarySearch(int arr[], int l, int r, int x);

int main()
{
    //array 
    int arr[]={2,3,4,10,60,70,71};
    //size of the array. 
    int n = sizeof(arr) / sizeof(arr[0]);
    //search the var 
    int x;
    
    cout << "Enter number to search ";
    cin >> x;
    
    cout << "Starting binary search ";
    int result = binarySearch(arr, 0, n - 1, x);
    
    //found  found 
    if (result != -1)
        cout << "element found at index " << result << endl;
    return 0;
}

int binarySearch(int arr[], int l, int r, int x) {
    
    while(l <= r){
        int m = l + (r-l)/2;
        //print current range being search
        cout << "search in range [" << l << " , " << r << "], ";
        cout << "midpoint at index " << m << " value " << arr[m] << ")... ";
        
        //check if x is found of the mid 
        if (arr[m] == x) {
            cout << "Match found \n";
            return m;
        }
        //if x is greater than, ignore left hand
        if (arr[m]<x){
            cout << "Going right \n";
            l=m+1;
        }else{
            cout << "Going left \n";
            r =  m-1;
        }
    }
    cout << "Element not found in the array \n";
    return -1;
}







