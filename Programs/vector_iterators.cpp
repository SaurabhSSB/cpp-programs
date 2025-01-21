# include <iostream>
# include <vector>
using namespace std;

int main() {
    vector<int>vec= {11, 15, 16, 18, 20, 24, 26};
    
    // Using iterators
    for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
    }

    // Range 
    for (int val : vec) {
    cout << val << " ";
    }

    return 0;
}