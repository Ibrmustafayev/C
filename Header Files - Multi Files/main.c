#include <stdio.h>
#include "student.h"

int main() {
    int n;
    printf("How many students? ");
    scanf("%d", &n);

    Student arr[n], readArr[n];
    char filename[] = "students.txt";
    for (int i = 0; i < n; i++) {
        printf("\nName: ");
        scanf("%s", arr[i].name);
        printf("Age: ");
        scanf("%d", &arr[i].age);
        printf("GPA: ");
        scanf("%f", &arr[i].gpa);
    }
    saveToFile(arr, n, filename);

    int count = readFromFile(readArr, filename);
    printf("\n\nLoaded students:\n");
    for (int i = 0; i < count; i++) {
        printf("  %d. %s, %d, %.2f\n", i + 1, readArr[i].name, readArr[i].age, readArr[i].gpa);
    }

    return 0;
}
