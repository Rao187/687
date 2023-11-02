#include <iostream>
using namespace std;
int main() 
{
    int option;
    cout << "Select an option:\n";
    cout << "1. Find prime numbers in a given range\n";
    cout << "2. Check if a specific number is prime\n";
    cout << "Enter 1 or 2: ";
    cin >> option;

    if (option == 1) {
        int lower, upper;
        cout << "Enter the lower range: ";
        cin >> lower;
        cout << "Enter the upper range: ";
        cin >> upper;

        cout << "Prime numbers in the range [" << lower << ", " << upper << "]:\n";
        for (int num = lower; num <= upper; num++) {
            if (num <= 1)
            {
                continue;
            }
            int i;
            for (i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    break;
                }
            }
            if (i * i > num) {
                cout << num << " ";
            }
        }
        cout << endl;
    }
    else if (option == 2) {
        int num;
        cout << "Enter a number to check if it's prime: ";
        cin >> num;

        if (num <= 1) {
            cout << num << " is not a prime number.\n";
        }
        else {
            int i;
            for (i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    break;
                }
            }
            if (i * i > num) {
                cout << num << " is a prime number.\n";
            }
            else {
                cout << num << " is not a prime number.\n";
            }
        }
    }
    else {
        cout << "Invalid option. Please select 1 or 2.\n";
    }

    return 0;
}