#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int arr[MAX];
    int n = 0;
    int choice, value, position;

    do {
        cout << "\n===== ARRAY MENU =====\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                if (n > MAX || n < 0) {
                    cout << "Invalid size!\n";
                    n = 0;
                    break;
                }

                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                cout << "Array created successfully.\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n == MAX) {
                    cout << "Array is full.\n";
                    break;
                }

                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> position;

                if (position < 1 || position > n + 1) {
                    cout << "Invalid position.\n";
                    break;
                }

                cout << "Enter value: ";
                cin >> value;

                for (int i = n; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = value;
                n++;

                cout << "Element inserted successfully.\n";
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is empty.\n";
                    break;
                }

                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> position;

                if (position < 1 || position > n) {
                    cout << "Invalid position.\n";
                    break;
                }

                for (int i = position - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                n--;

                cout << "Element deleted successfully.\n";
                break;

            case 5:
                if (n == 0) {
                    cout << "Array is empty.\n";
                    break;
                }

                cout << "Enter element to search: ";
                cin >> value;

                position = -1;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        position = i;
                        break;
                    }
                }

                if (position != -1) {
                    cout << "Element found at position "
                         << position + 1 << ".\n";
                } else {
                    cout << "Element not found.\n";
                }
                break;

            case 6:
                cout << "Program exited.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}