# include <iostream>
# include <vector>
using namespace std;

int main() {
    vector<int> vec={10, 12, 14, 16, 20, 24, 25};
    int size = vec.size(); // Current number of elements
    int capacity = vec.capacity(); // Internal storage size

    vec.resize(10); // Resize vector to hold 10 elements
    vec.shrink_to_fit(); // Reduce capacity to match size
    
    return 0;
}
