# include <iostream>
using namespace std;

class arra{
    private:
        int arr[30];
        int recreate[5];
        int count;
    public:
        void render(){
            count= 0;
        }
        void setArra(){
            cout<< "Value for arr at index "<< count<< ":- "<< endl;
            cin>> arr[count];
            cout<< "\nValue for recreate at index"<< count<< ":- "<< endl;
            cin>> recreate[count];
            count++;
        }
        void getArra(){
            cout<< "The current value for count is "<< count<< endl;
            for( int i= 0; i< count; i++)
            {
                cout<< "arraying for arraying "<< arr[i]<< endl;
                cout<< "Recreating for fun"<< recreate[i]<< endl;
            }
        }
};

int main(){
    arra tent;
    tent. render();
    tent. setArra();
    tent. setArra();
    tent. setArra();
    tent. setArra();
    tent. getArra();
    return 0;    
}