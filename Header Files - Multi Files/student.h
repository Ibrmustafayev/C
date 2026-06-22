#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

void saveToFile(Student arr[], int n, char *filename);
int readFromFile(Student readArr[], char *filename);

#endif
