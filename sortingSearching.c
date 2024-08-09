#include <stdio.h>

void inputArray(int *a, int *n) {
    printf("Enter the number of elements: ");
    scanf("%d", n); // Corrected to take the array size as input

    printf("Enter the array elements:\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

void sort(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void arrayPrint(int *a, int n) {
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int search(int *a, int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == target)
            return mid;
        if (a[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int a[100];  // Adjust size as needed
    int n, target;
    
    inputArray(a, &n);  // Pass n by reference to modify its value
    sort(a, n);

    printf("Enter the search target: ");
    scanf("%d", &target);

    int result = search(a, n, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    arrayPrint(a, n);
    return 0;
}