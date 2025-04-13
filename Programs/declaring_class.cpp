# include<iostream>
using namespace std;

class Rohan{
    public:
        void S(char a){
            if(a== 'S'){
                cout<< "Saurabh"<< endl;
            }
            else if(a== 'N'){
                cout<< "Nittin"<< endl;
            }
            else{
                cout<< "Terminating command"<< endl;
            }
        }
        void N(int x){
            if(x== 2){
                cout<< "Two"<< endl;
            }
            else{
                cout<< "Right Wrong"<< endl;
            }
        }
};

int main(){
    Rohan rent;
    rent.S('S');
    rent.N(2);
    return 0;
}