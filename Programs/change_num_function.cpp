# include <iostream>
using namespace std;

void sum(int &a, int &b){
    cout<< a<< endl;
    a= 27;    
    cout<< b<< endl;
}

int main(){
    int num_1= 11, num_2= 12;
    sum( num_1, num_2);
    cout<< num_1<< endl;
    cout<< num_2<< endl;
    return 0;
}