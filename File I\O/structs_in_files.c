#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

void saveToFile(Student arr[], int n, char *filename);
int readFromFile(Student readArr[], char *filename);

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
    printf("Loaded students:\n");
    for (int i = 0; i < count; i++) {
        printf("  %d. %s, %d, %.2f\n", i + 1, readArr[i].name, readArr[i].age, readArr[i].gpa);
    }

    return 0;
}

void saveToFile(Student arr[], int n, char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("\nNot able to open %!", filename);
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
        printf("Not able to read %s!", filename);
        return 0;
    }
    int count = 0;
    while (fscanf(fp, "%s %d %f", readArr[count].name, &readArr[count].age, &readArr[count].gpa) == 3) {count++;}
    fclose(fp);
    return count;
}
