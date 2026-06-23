//programe 1
#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1) {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");

    return 0;
}

// programe 2

#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                printf("First repeating character = %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.");

    return 0;
}

// programe 3

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2) {
        flag = 0;
    } else {
        for(i = 0; i < len1; i++) {
            for(j = i + 1; j < len1; j++) {
                if(str1[i] > str1[j]) {
                    char temp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp;
                }
                if(str2[i] > str2[j]) {
                    char temp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = temp;
                }
            }
        }

        for(i = 0; i < len1; i++) {
            if(str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}
// programe 4

#include <stdio.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count > max) {
            max = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c", maxChar);
    printf("\nFrequency = %d", max);

    return 0;
}