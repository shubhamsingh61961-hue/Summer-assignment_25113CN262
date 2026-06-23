// programe 1
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
// programe 2
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

// programe 3
#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}

// programe 4

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;   // Convert to uppercase

    printf("Uppercase letter: %c\n", ch);

    return 0;
}