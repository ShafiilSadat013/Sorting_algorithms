#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (0s, 1s, and 2s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Count 0s, 1s, and 2s
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    // Overwrite the array in sorted order
    int i = 0;
    while (count0--) arr[i++] = 0;
    while (count1--) arr[i++] = 1;
    while (count2--) arr[i++] = 2;

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
