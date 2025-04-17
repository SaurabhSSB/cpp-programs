# include<iostream>
using namespace std;

class calci{
    void division( int a, int b){
        cout<< "division:- "<< a / b<< endl;
    }
    void product( int a, int b){
        cout<< "product:- "<< a * b<< endl;
    }
    void addition( int a, int b){
        cout<< "addition:- "<< a + b<< endl;
    }
    void subtraction( int a, int b){
        cout<< "subtraction:- "<< a - b<< endl;
    }
    public:
        void select(string x, int y, int z){
            if (x== "division"){
                division( y, z);
            }
            else if (x== "product"){
                product( y, z);
            }
            else if (x== "addition"){
                addition( y, z);
            }
            else if (x== "subtraction"){
                subtraction( y, z);
            }
            else{
                cout<< "nothing for you"<< endl;
            }
        }
};

int main(){
    calci regular;
    regular. select("product", 10, 12);
    return 0;
}