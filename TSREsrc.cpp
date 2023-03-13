#include <iostream>
using namespace std;

int main() {

    // Display welcome message
    cout << "##### WELCOME TO TECH SQUAD! #####" << endl;

    // Outer menu loop
    while (true) {
        cout << "Customer would like an estimate for:" << endl;
        cout << "1: PC" << endl;
        cout << "2: Smartphone" << endl;
        cout << "3: Exit" << endl;

        int device_choice;
        cout << "Enter choice (1-3):";
        cin >> device_choice;

        // Input validation
        while (device_choice < 1 || device_choice > 3) {
            cout << "Invalid choice. Please try again." << endl;
            cout << "Enter choice (1-3):";
            cin >> device_choice;
        }

        // Exit program if user selects option 3
        if (device_choice == 3) {
            cout << "\nExiting..." << endl;
            break;
        }

        // Display options based on device type
        if (device_choice == 1) {
            cout << "\n### PC Repair Options ###" << endl;
            cout << "1: Battery Replacement" << endl;
            cout << "2: Wireless Adapter Troubleshooting" << endl;
            cout << "3: Virus Removal" << endl;
        }
        else if (device_choice == 2) {
            cout << "\n### Smartphone Repair Options ###" << endl;
            cout << "1: Screen Replacement" << endl;
            cout << "2: Battery Replacement" << endl;
            cout << "3: Data Recovery" << endl;
        }

        int issue_choice;
        cout << "\nEnter choice (1-3):";
        cin >> issue_choice;

        // Input validation
        while (issue_choice < 1 || issue_choice > 3) {
            cout << "Invalid choice. Please try again." << endl;
            cout << "Enter choice (1-3):";
            cin >> issue_choice;
        }

        // Display repair estimate based on user choices
        cout << "\nThe repair estimate is: $";
        if (device_choice == 1) {
            if (issue_choice == 1) {
                cout << "100.00" << endl;
            }
            else if (issue_choice == 2) {
                cout << "25.00" << endl;
            }
            else if (issue_choice == 3) {
                cout << "100.00" << endl;
            }
        }
        else if (device_choice == 2) {
            if (issue_choice == 1) {
                cout << "125.00" << endl;
            }
            else if (issue_choice == 2) {
                cout << "110.00" << endl;
            }
            else if (issue_choice == 3) {
                cout << "200.00" << endl;
            }
        }
    }

    return 0;
}
