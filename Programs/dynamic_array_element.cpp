# include<bits/stdc++.h>
using namespace std;

int main() {
    int* ar= new int[5] {1,2,4,5,6};
    
    // resizing the array
    int* new_ar= new int[6];
    for (int i=0; i<5;i++) {
        new_ar[i]= ar[i];
    }
    
    new_ar[5]= 33;
    
    delete[] ar;
    ar= new_ar;
    
    for(int j= 0; j<6; j++) {
        cout<< ar[j]<< endl;
    }   

    delete[] ar;
    return 0;
}
