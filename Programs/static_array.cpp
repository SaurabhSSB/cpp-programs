# include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring a static array with fixed size 5
    int arr[5]= {2, 5, 8, 23, 12};
    
    // Calculate the length of array
    int length= sizeof(arr)/sizeof(arr[0]);
    cout<<"length of static array is "<<length<<endl;
        
    // Access and print elements
    cout<<"Printing elements of the static array arr"<<endl;
    for (int i= 0; i< 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}