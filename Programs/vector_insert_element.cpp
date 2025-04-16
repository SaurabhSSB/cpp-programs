#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5};
    int positionToInsert = 2; // Index where we want to insert
    int elementToInsert = 3;

    // Insert 3 at index 2
    v.insert(v.begin() + positionToInsert, elementToInsert);

    // Print to verify
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}