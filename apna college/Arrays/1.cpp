#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Access array elements
    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Modify an element
    arr[2] = 100;
    cout << "After modification: " << arr[2] << endl;
    
    return 0;
}