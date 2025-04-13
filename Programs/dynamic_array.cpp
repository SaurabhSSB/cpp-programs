# include<bits/stdc++.h>
using namespace std;

int main()
{
    int* a= new int[5] {1,2,4,5,6};
    for (int i=0; i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    delete[] a;
    return 0;
}