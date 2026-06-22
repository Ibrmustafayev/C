#include <stdio.h>

void saveToFile(int arr[], int size, char *filename);
int readFromFile(int readArr[], char *filename);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], readArr[size];
    char filename[] = "numbers.txt";
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    saveToFile(arr, size, filename);

    printf("\n\nReading back from the file....");
    int count = readFromFile(readArr, filename), sum = 0;
    printf("\nNumbers: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", readArr[i]);
        sum += readArr[i];
    }
    printf("\nSum: %d", sum);

    return 0;
}

void saveToFile(int arr[], int size, char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Not able to open the file!");
        return;
    }
    for (int i = 0; i < size; i++) {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);
    printf("Saved to %s", filename);
}

int readFromFile(int readArr[], char *filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("\nNot able to read the file!");
        return 0;
    }
    int count = 0;
    while (fscanf(fp, "%d", &readArr[count]) == 1) {
        count++;
    }
    return count;
}
