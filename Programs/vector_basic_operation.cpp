# include <iostream>
# include <vector>
using namespace std;

int main() {
    vector<int>vc= {10, 12, 14, 22, 33, 24, 15, 78, 86, 100};

    // Adding Elements
    vc.push_back(10); // Add 10 to the end
    vc.emplace_back(20); // Add 20 (faster than push_back)

    // Removing Elements
    vc.pop_back(); // Remove last element
    vc.erase(vc.begin() + 2); // Remove element at index 2
    vc.erase(vc.begin(), vc.begin() + 3); // Remove elements from index 0 to 2

    // Accessing Elements
    int first = vc.front(); // First element
    int last = vc.back();   // Last element
    int val = vc[2];        // Access element at index 2   
    int val2 = vc.at(3);    // Access element at index 3 (with bounds checking)

    return 0;
}