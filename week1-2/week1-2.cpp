#include<stdio.h>
int main() {
	int s;
	printf("Score : ");
	scanf_s("%d", &s);
	if (s >= 80 && s <= 100)
		printf("Your grade : A");
	else if (s >= 75 && s <= 100)
		printf("Your grade : B+");
	else if (s >= 70 && s <= 100)
		printf("Your grade : B");
	else if (s >= 65 && s <= 100)
		printf("Your grade : C+");
	else if (s >= 60 && s <= 100)
		printf("Your grade : c");
	else if (s >= 55 && s <= 100)
		printf("Your grade : D+");
	else if (s >= 50 && s <= 100)
		printf("Your grade : D");
	else if (s < 50 && s >= 0)
		printf("Your grade : E");
	else
		printf("Your grade : Error");
	return 0;
}