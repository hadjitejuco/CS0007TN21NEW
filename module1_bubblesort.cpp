/******************************************************************************

https://github.com/hadjitejuco/CS0007TN21NEW
Bubble sort 

ALGO 

1.  START 
2.  Compare each pair of adjacent element. 
        array[i] and array[i+1]
        if they are not in the desired order 
            3 1  -> swap 
3.  Process throughout the array 
4.  complete the pass 
5.  Repeat the Process
6.  STOP 


functions 
    swap 
    printArray
    bubbleSort
    
    
*******************************************************************************/

#include <iostream>
using namespace std;
//prototype functions
void swap (int &a, int &b);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

int main()
{
    //declare the array 
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //get the size of array 
    int n = sizeof (arr)/ sizeof(arr[0]);
    
    //display the original array 
    cout << "Original Array Value " << endl;
    printArray (arr, n);
    
    bubbleSort(arr, n);
    
    cout << "Sorted Array Value " << endl;
    printArray (arr, n);
    
    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap (int &a, int &b){
    
    int temp =  a;
    a = b;
    b = temp; 
}



void bubbleSort(int arr[], int n)
{
    //outer loop
    for (int i=0; i<n -1; i++){
        //inner loop
        for (int j = 0; j<n - i -1; j++){
            
            if (arr[j]>arr[j+1]) {
                swap (arr[j], arr[j+1]);
            }
        }
        
        cout << "Array after pass "<< i+1 << " : ";
        printArray(arr,n);
    }
    
    
    
}







