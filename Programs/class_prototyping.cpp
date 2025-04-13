# include<iostream>
using namespace std;

class rent;

class roll{
    private:
        int a;
        char b;
        void real(int x, int y){
            cout<< "This is real "<< x<< "This is imaginary"<< y<< endl;
        }
    public:
        void access_private(){
            a= 11;
            b= 15;
            real(a,b);
        }
        void class_prototype(int u, int v, int w);
        void getData(){
            cout<< "a "<< a<< endl;
            cout<< "b "<< b<< endl;
            cout<< "This is it"<< endl;
        }
};

class rent{
    private:
        int a;
        int b;
        int c;
    public:
        void setData(int x, int y, int z);
        void getData(){
            cout<< "first number "<< a<< " second number "<< b<< " third number "<< c<< endl;
        }
};

void roll:: class_prototype(int x, int y, int z){
    cout<< "This is prototyping "<< " X "<< x<< " Y "<< y<< " Z "<< z<< endl;
}

void rent:: setData( int u, int v, int w){
    a= u;
    b= v;
    c= w;
    cout<< "u "<< u<< " v "<< v<< " w "<< w<< endl;
}

int main(){
    roll singh;
    singh. access_private();
    singh. class_prototype( 11, 15, 16);
    singh. getData();
    rent wing;
    wing. setData(10, 11, 12);
    wing. getData();
    return 0;
}