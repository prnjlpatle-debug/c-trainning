#include <stdio.h>
#include <string.h>
#define MAX 100

int isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l] != str[h])
            return 0;
        l++;
        h--;
    }
    return 1;
}

void removeDuplicates(char str[]) {
    int hash[256] = {0};
    int curr = 0, res = 0;
    while (str[curr]) {
        if (hash[(unsigned char)str[curr]] == 0) {
            hash[(unsigned char)str[curr]] = 1;
            str[res++] = str[curr];
        }
        curr++;
    }
    str[res] = '\0';
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
