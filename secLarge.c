#include<stdio.h>
#include<limits.h> // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    int first_large = INT_MIN, second_large = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > first_large) {
            second_large = first_large;
            first_large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != first_large) {
            second_large = arr[i];
        }
    }

    printf("Second Largest is: %d\n", second_large);
    return 0;
}
