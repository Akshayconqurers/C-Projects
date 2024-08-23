#include <iostream>

using namespace std;

int main() {
    float cgpa;
    int scale;

    // Input CGPA
    cout << "Enter your CGPA: ";
    cin >> cgpa;

    // Choose scale
    cout << "Is the CGPA out of 5 or 10? (Enter 5 or 10): ";
    cin >> scale;

    // Calculate percentage
    float percentage = 0;
    if (scale == 10) {
        percentage = cgpa * 9.5; // Common formula for 10-point scale
    } else if (scale == 5) {
        percentage = cgpa * 20; // Conversion for 5-point scale
    } else {
        cout << "Invalid scale. Please enter 5 or 10." << endl;
        return 1;
    }

    // Output the percentage
    cout << "Your percentage is: " << percentage << "%" << endl;

    return 0;
}
