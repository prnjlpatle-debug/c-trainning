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

void printDuplicates(char str[]) {
	int count[256] = {0};
	int flag = 0;
	printf("Duplicate characters: ");
	for (int i = 0; str[i]; i++) {
		count[(unsigned char)str[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (count[i] > 1) {
			printf("%c ", i);
			flag = 1;
		}
	}
	if (!flag) printf("None");
	printf("\n");
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

	printDuplicates(str);
	return 0;
}
