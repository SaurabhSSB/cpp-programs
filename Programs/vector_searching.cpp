# include <iostream>
# include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec= {8, 12, 14, 16, 18, 24, 25};
    
    auto it = find(vec.begin(), vec.end(), 16); // Find value 16
    if (it != vec.end()) cout << "Found at index: " << it - vec.begin();

    return 0;
}   