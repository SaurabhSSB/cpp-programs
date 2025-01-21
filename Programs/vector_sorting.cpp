# include <iostream>
# include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec= {8, 12, 14, 16, 18, 24, 25};
    
    sort(vec.begin(), vec.end()); // Ascending order
    sort(vec.rbegin(), vec.rend()); // Descending order

    return 0;
}