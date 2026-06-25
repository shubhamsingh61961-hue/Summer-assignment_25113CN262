// programe 1

#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j, k;

    // Input size of first array
    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &n1);

    // Input elements of first sorted array
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second sorted array: ");
    scanf("%d", &n2);

    // Input elements of second sorted array
    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    // Merge both arrays in sorted order
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while(i < n1) {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n2) {
        c[k] = b[j];
        j++;
        k++;
    }

    // Display merged array
    printf("Merged Sorted Array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
// programe 2

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, found;

    // Input first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    // Traverse each character of the first string
    for (i = 0; str1[i] != '\0'; i++) {

        found = 0;

        // Check if the current character has already appeared
        // in the first string to avoid duplicate output
        for (j = 0; j < i; j++) {
            if (str1[i] == str1[j]) {
                found = 1;
                break;
            }
        }

        // If character is already processed, skip it
        if (found)
            continue;

        // Check whether the character exists in the second string
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}
// programe 3

#include <stdio.h>
#include <string.h>

int main() {
    char name[20][50], temp[50];
    int n, i, j;

    // Input number of names
    printf("Enter number of names: ");
    scanf("%d", &n);

    // Input names
    printf("Enter %d names:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    // Sort names using Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {

            // Compare two names
            if(strcmp(name[i], name[j]) > 0) {

                // Swap names if they are in wrong order
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
// programe 4

#include <stdio.h>
#include <string.h>

int main() {
    char words[20][50], temp[50];
    int n, i, j;

    // Input number of words
    printf("Enter number of words: ");
    scanf("%d", &n);

    // Input words
    printf("Enter %d words:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort words based on their length
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {

            // Compare lengths of two words
            if(strlen(words[i]) > strlen(words[j])) {

                // Swap words if first word is longer
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Display sorted words
    printf("\nWords sorted by length:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}