// Hashing is like giving a unique ID to a piece of information so that you can quickly find or retrieve it later.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declare an unordered_map
    unordered_map<string, int> myMap;

    // Insert key-value pairs
    myMap["apple"] = 5;
    myMap["banana"] = 10;
    myMap["orange"] = 8;

    // Access elements by key
    cout << "Apple count: " << myMap["apple"] << endl;

    // Check if a key exists
    if (myMap.find("banana") != myMap.end()) {
        cout << "Banana exists in the map." << endl;
    }

    // Iterate through the map
    for (auto &pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
