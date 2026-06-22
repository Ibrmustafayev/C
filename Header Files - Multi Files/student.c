#include "student.h"
#include <stdio.h>

void saveToFile(Student arr[], int n, char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("\nNot able to open %s", filename);
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %f\n", arr[i].name, arr[i].age, arr[i].gpa);
    }
    fclose(fp);
    printf("\nSaved to %s", filename);
}

int readFromFile(Student readArr[], char *filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("\n\nNot able to read %s", filename);
        return 0;
    }
    int count = 0;
    while (fscanf(fp, "%s %d %f", readArr[count].name, &readArr[count].age, &readArr[count].gpa) == 3) {count++;}
    fclose(fp);
    return count;
}
