# include<iostream>
# include<vector>
using namespace std;

int main() {
    // different ways to initialize array in c++
    vector<int> v1;
    vector<int> v2(11,12);
    vector<int> v3{2,3,5,6,9};
    vector<int> v4(v3);
    vector<int> v5(v3.begin(), v3.begin()+3);
    
    // Printing vector elements
    for (int val:v3){
        cout<< val<< " ";
    }
    cout<<endl;
    for (auto it=v3.begin(); it<v3.end(); it++){
        cout<< *it<< " ";
    }
    cout<<endl;
    
    return 0;
}
