
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int my_array[n];

    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> my_array[i];
    }

    for(int i = 0; i < n-1; i++) {
        int min_index = i;
        for(int j = i+1; j < n; j++) {
            if(my_array[j] < my_array[min_index]) {
                min_index = j;
            }
        }
        int min_value = my_array[min_index];
        for(int k = min_index; k > i; k--) {
            my_array[k] = my_array[k-1];
        }
        my_array[i] = min_value;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}
