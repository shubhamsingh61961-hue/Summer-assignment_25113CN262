// programe 1

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("'%s' is a palindrome.\n", str);
    else
        printf("'%s' is not a palindrome.\n", str);

    return 0;
}
// programe 2

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }

    printf("Number of words = %d", count);

    return 0;
}
// programe 3

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
// programe 4

#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String without spaces: %s", str);

    return 0;
}