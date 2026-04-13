#include <stdio.h>

#define N 5

typedef struct {
	int roll;
	char name[50];
	float marks;
} Student;

int main() {
	Student students[N];
	printf("Enter details for %d students:\n", N);
	for (int i = 0; i < N; i++) {
		printf("\nStudent %d\n", i + 1);
		printf("Roll No: ");
		scanf("%d", &students[i].roll);
		getchar(); 
		printf("Name: ");
		fgets(students[i].name, sizeof(students[i].name), stdin);
		students[i].name[strcspn(students[i].name, "\n")] = '\0';
		printf("Marks: ");
		scanf("%f", &students[i].marks);
		getchar();
	}

	printf("\n%-10s %-25s %-10s\n", "RollNo", "Name", "Marks");
	printf("-----------------------------------------------------\n");
	for (int i = 0; i < N; i++) {
		printf("%-10d %-25s %-10.2f\n", students[i].roll, students[i].name, students[i].marks);
	}
	return 0;
}

