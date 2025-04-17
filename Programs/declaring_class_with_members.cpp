# include <iostream>
using namespace std;

class Red{
    int x, y;
    char z;
    void num(int a, int b){
        cout<< "This is a "<< a<< " This is b "<< b<< endl;
        cout<< "Function num executed"<< endl;
    }
    int real(char c){
        cout<< "This is c"<< c<< endl;
        return(static_cast<int>(c));
    }
    public:
        void setData(int num_1, int num_2, char char_1){
            x= num_1;
            y= num_2;
            z= char_1;
        }
        void getData(int num_1, int num_2, char char_1){
            num(num_1, num_2);
            int v= real(char_1);
            cout<< v<< endl;
            cout<< x<< endl;
            cout<< y<< endl;
            cout<< z<< endl;
        }
};

int main(){
    Red set_;
    set_.setData(10, 12, 'R');
    set_.getData(11, 15, 'S');
    return 0;
}