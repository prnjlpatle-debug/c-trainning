#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char str[MAX];
	int i, len, isTRUE = 1;
	printf("Enter a string: ");
	fgets(str, MAX, stdin);
	str[strcspn(str, "\n")] = 0; // Remove newline
	len = strlen(str);
	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			isTRUE = 0;
			break;
		}
	}
	if (isTRUE)
		printf("The string is a palindrome.\n");
	else
		printf("The string is not a palindrome.\n");
	return 0;
}
