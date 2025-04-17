#include <iostream>
using namespace std;

class Real {
    int num_1;

    // Declare `Twice` as a friend function
    friend Real Twice(Real s);

public:
    void setData(int a) {
        num_1 = a;
    }
    void getData() {
        cout << "The value of the number is " << num_1 << "." << endl;
    }
};

// Implement the `Twice` function
Real Twice(Real s) {
    Real result; // Create a new Real object to return
    result.num_1 = 2 * s.num_1; // Double the value of `num_1`
    return result;
}

int main() {
    Real Deal, DoubledDeal;

    Deal.setData(44);
    Deal.getData();

    // Call the `Twice` function
    DoubledDeal = Twice(Deal);
    DoubledDeal.getData(); // Display the doubled value

    return 0;
}
