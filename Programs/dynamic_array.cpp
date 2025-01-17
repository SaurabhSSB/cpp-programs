#include <iostream>

int main() {
    int size;
    
    // Get the size from user
    std::cout << "Enter size of array: ";
    std::cin >> size;

    // Dynamic allocation
    int* arr = new int[size];

    // Initialize the array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10; // Just an example, filling with multiples of 10
    }

    // Use the array
    std::cout << "Array elements are:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Example of resizing (this is a simplified approach)
    int newSize = size + 5;
    int* newArr = new int[newSize];

    // Copy elements from old array to new array
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    
    // Initialize new elements
    for (int i = size; i < newSize; ++i) {
        newArr[i] = 0; // Or some other default value
    }

    // Delete the old array
    delete[] arr;

    // Update pointer to new array
    arr = newArr;
    size = newSize;

    // Now use the resized array
    std::cout << "Array after resizing:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Free the memory when done
    delete[] arr;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    // Allocate dynamic array
    int* arr = new int[n];

    // Input values into the array
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print values of the array
    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
