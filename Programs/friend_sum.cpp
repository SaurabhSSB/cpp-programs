# include <iostream>
using namespace std;

class Write;

class Read{
    int a;
    public:
        void set_a( int num_1){
            a= num_1;
        }
        friend void sum( Read, Write);
};

class Write{
    int b;
    public:
        void set_b( int num_2){
           b= num_2;
        }
        friend void sum( Read, Write);
};

void sum( Read s, Write t){
    cout<<  "Sum is "<< s. a+ t. b<< "."<< endl;
}

int main() {
    Read Book;
    Book. set_a(25);
    Write Copy;
    Copy. set_b(36);
    sum( Book, Copy);
    return 0;
}