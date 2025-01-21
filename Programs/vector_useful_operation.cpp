# include <iostream>
# include <vector>
using namespace std;

int main() {
    vector<int> vec= {12, 15, 16, 18, 21, 27, 30};
    vec.clear(); // Remove all elements
    bool isEmpty = vec.empty(); // Check if vector is empty
    vec.insert(vec.begin() + 2, 15); // Insert 15 at index 2

    return 0;
}