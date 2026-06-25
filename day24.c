// programe 1

#include <stdio.h>
#include <string.h>

int isRotation(char s1, char s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Lengths must be equal
    if (len1 != len2)
        return 0;

    // Concatenate s1 with itself
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are not rotations of each other.\n");

    return 0;
}
// programe 2

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}
// programe 3

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int i, len = 0, maxLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
// programe 4

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; ) {
            if (str[i] == str[j]) {
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}