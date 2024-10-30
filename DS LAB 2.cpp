// Question no 1:-
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The largest value in the array is: " << max << endl;

    return 0;
}
// Question no 2:-
#include <iostream>
using namespace std;

int main() {
    int n, item;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n + 1]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the new item to insert at the top: ";
    cin >> item;

    arr[0] = item;

    cout << "Array after inserting the new item at the top:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Question no 3:-
#include <iostream>
using namespace std;

int main() {
    int n, item;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n + 1];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the new item to insert at the bottom: ";
    cin >> item;

    arr[n] = item;

    cout << "Array after inserting the new item at the bottom:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Question no:-4
#include <iostream>
using namespace std;

int main() {
    int n, item, loc;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n + 1]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the location (0 to " << n << ") to insert the new item: ";
    cin >> loc;
    cout << "Enter the new item to insert: ";
    cin >> item;

    if (loc < 0 || loc > n) {
        cout << "Invalid location!" << endl;
        return 1;
    }

    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1];
    }

    arr[loc] = item;

    cout << "Array after inserting the new item:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Question no:- 5
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deleting the item from the top:" << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Question no:- 6
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array after deleting the item from the bottom:" << endl;
    for (int i = 0; i < n - 1; i++) { // Only print up to n - 1 elements
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Question no :-7
#include <iostream>
using namespace std;

int main() {
    int n, loc;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the location (0 to " << n - 1 << ") to delete the item: ";
    cin >> loc;

    if (loc < 0 || loc >= n) {
        cout << "Invalid location!" << endl;
        return 1;
    }

    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deleting the item from location " << loc << ":" << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Question no :-8
#include <iostream>
using namespace std;

int main() {
    int n, choice, index, value;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n]; 
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Choose search method:\n";
    cout << "1. Search by index\n";
    cout << "2. Search by value\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the index to search (0 to " << n - 1 << "): ";
        cin >> index;

        if (index >= 0 && index < n) {
            cout << "Element at index " << index << " is: " << arr[index] << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    } 
    else if (choice == 2) {
        
        cout << "Enter the value to search for: ";
        cin >> value;
        
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                cout << "Value " << value << " found at index " << i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Value " << value << " not found in the array." << endl;
        }
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
// Question no :- 9
#include <iostream>
using namespace std;

int main() {
    int n, index, newValue;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr[n]; 

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index to update (0 to " << n - 1 << "): ";
    cin >> index;

    if (index >= 0 && index < n) {
        cout << "Enter the new value: ";
        cin >> newValue;

        arr[index] = newValue;

        cout << "Array after update:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}
// Question no :- 10
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1;
    }

    int arr1[n], arr2[n], result[n]; 

    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    cout << "Resultant array after addition:" << endl;
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}