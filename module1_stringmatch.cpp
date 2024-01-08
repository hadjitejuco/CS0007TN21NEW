/******************************************************************************

string search 


*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;
//prototype
int searchString(string arr[], int size, string target);
int main()
{
    //array
    string arr[]={"apple", "banana","date","grapes"};
    //size of array sizeof()
    int n  = sizeof(arr)/sizeof(arr[0]);
    string target;
    
    cout << "Enter string to search: ";
    //cin >> target; //do not have spaces
    getline(cin, target); //use include spaces 
    
    int result = searchString(arr, n, target);
    if (result == -1)
        cout << "String '" << target << "'is not present "<< endl;
    else
        cout << " String '" << target << "' found at index " << result << endl; 
    return 0;
}

int searchString(string arr[], int size, string target)
{
    //loop
    for (int i = 0; i<size ; i++) {
        if (arr[i]==target)
            return i;
        
    }
    return -1;
}
