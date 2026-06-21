#include <stdio.h>
#include <string.h>

int arraySum(int arr[], int size);
int arrayMax(int arr[], int size);
int isPalindrome(char word[], int start, int end);
void reverseWord(char word[], int start, int end);

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum: %d\nMax: %d", arraySum(arr, size), arrayMax(arr, size));

    char word[50];
    printf("\n\nEnter a word: ");
    scanf("%s", word);
    printf("Is palindrome? %s", (isPalindrome(word, 0, strlen(word) - 1) == 1) ? "Yes" : "No");

    printf("\n\nEnter a word to reverse: ");
    scanf("%s", word);
    printf("Reversed: ");
    reverseWord(word, 0, strlen(word) - 1);
    
    return 0;
}

int arraySum(int arr[], int size) {
    if (size == 0) {return 0;}
    return arr[size - 1] + arraySum(arr, size - 1);
}

int arrayMax(int arr[], int size) {
    if (size == 1) {return arr[0];}
    int n = arrayMax(arr, size - 1);
    return (n > arr[size - 1]) ? n : arr[size - 1];
}

int isPalindrome(char word[], int start, int end) {
    if (start >= end) {return 1;}
    if (word[start] == word[end]) {return isPalindrome(word, start + 1, end - 1);}
    return 0;
}

void reverseWord(char word[], int start, int end) {
    if (end < start) {return;}
    printf("%c", word[end]);
    reverseWord(word, start, end - 1);
}
