#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = a; j >= i; j--) {
			if (i == 1 || j == a )
			printf("*");
			else { printf(" "); }
		}
		for (int j = a - 1; j >= i; j--) {
			if (i == 1 || i==j )
			printf("*");
			else { printf(" "); }
		}
		printf("\n");
	}
	for (int i = 1; i <= a - 1; i++) {
		for (int j = a - 1; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			if (j==1 || i==a-1)
			printf("*");
			else { printf(" "); }
		}
		for (int j = 1; j <= i + 1; j++) {
			if (i == a-1 || j==i+1)
			printf("*");
			else { printf(" "); }
		}
		printf("\n");
	}
	return 0;
}