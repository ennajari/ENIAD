#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the numbers
    int num1, num2;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    int sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
