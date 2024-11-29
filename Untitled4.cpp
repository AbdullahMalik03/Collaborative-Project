#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double value, convertedValue;

    do {
        cout << "-------Unit Converting System-------" << endl;
        cout << "1. Temperature (Celsius to Fahrenheit)" << endl;
        cout << "2. Distance (Kilometers to Miles)" << endl;
        cout << "3. Weight (Kilograms to Pounds)" << endl;
        cout << "4. Exit" << endl;
        cout << "Please Make a Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Temperature in Celsius: ";
                cin >> value;
                convertedValue = (value * 9.0 / 5.0) + 32; 
                cout << "Temperature in Fahrenheit: " << fixed << setprecision(5) << convertedValue << endl;
                break;

            case 2:
                cout << "Enter Distance in Kilometers: ";
                cin >> value;
                convertedValue = value * 0.621371; 
                cout << "Distance in Miles: " << fixed << setprecision(5) << convertedValue << endl;
                break;

            case 3:
                cout << "Enter Weight in Kilograms: ";
                cin >> value;
                convertedValue = value * 2.20462; 
                cout << "Weight in Pounds: " << fixed << setprecision(5) << convertedValue << endl;
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
