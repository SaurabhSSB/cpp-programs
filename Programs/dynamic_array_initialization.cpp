#include <iostream>
#include <vector>

namespace MyDynamicArray {
    class DynamicElement {
    public:
        int offset;
        int value;

        // Constructor
        DynamicElement(int o, int v) : offset(o), value(v) {}
    };

    // Function to create a dynamic array
    std::vector<DynamicElement> CreateDynamicArray(const std::vector<int>& values) {
        std::vector<DynamicElement> arr;
        for (size_t i = 0; i < values.size(); ++i) {
            arr.emplace_back(i, values[i]);  // Properly initialize elements
        }
        return arr;
    }
}

int main() {
    std::vector<int> myArray = {10, 20, 30};  // Use a vector instead of raw array
    auto myDynamicArray = MyDynamicArray::CreateDynamicArray(myArray);

    // Access and print elements
    for (const auto& elem : myDynamicArray) {
        std::cout << "Element at offset " << elem.offset << ": value is " << elem.value << std::endl;
    }

    return 0;
}
