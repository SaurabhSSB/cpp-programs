# include <iostream>
using namespace std;

template< class A>
void swapper(A &a, A& b){
    A temp= a;
    a= b;
    b= temp;        
}

int main() {
    int a= 15, b= 23;
    string x= "ssr", y= "ussr";
    char s= 'r', t= 'q';
    cout<< "Value of a is "<< a<< endl;
    cout<< "Value of b is "<< b<< endl;
    swapper( a, b);
    cout<< "Value of a is "<< a<< endl;
    cout<< "Value of b is "<< b<< endl;
    
    cout<< "Value of x is "<< x<< endl;
    cout<< "Value of y is "<< y<< endl;
    swapper( x, y);
    cout<< "Value of x is "<< x<< endl;
    cout<< "Value of y is "<< y<< endl;
    
    cout<< "Value of s is "<< s<< endl;
    cout<< "Value of t is "<< t<< endl;
    swapper( s, t);
    cout<< "Value of s is "<< s<< endl;
    cout<< "Value of t is "<< t<< endl;
    
    return 0;
}