#include <stdio.h>

void printSubsets(int arr[], int n, int *current, int currentSize, int index);

int main() {
    int n, currentSize = 0, index = 0;
    printf("Enter the number of elements in array? ");
    scanf("%d", &n);
    int arr[n], current[n];
    printf("Input: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printSubsets(arr, n, current, currentSize, index);

    return 0;
}

void printSubsets(int arr[], int n, int *current, int currentSize, int index) {
    if (index == n) {
        if (currentSize == 0) {printf("{}\n");}
        else if (currentSize == 1) {printf("{%d}\n", current[0]);}
        else {
            printf("{");
            for (int i = 0; i < currentSize - 1; i++) {
                printf("%d, ", current[i]);
            }
            printf("%d}\n", current[currentSize - 1]);
        }
        return;
    }
    printSubsets(arr, n, current, currentSize, index + 1);
    current[currentSize] = arr[index];
    printSubsets(arr, n, current, currentSize + 1, index + 1);
}
