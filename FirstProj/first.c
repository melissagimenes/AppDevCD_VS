#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
This program will take two positive integers from the user and print out all
the numbers which are divisible by 3 between these two numbers.
*/

int main(void) {
	int a, b;
	printf("enter two positive numbers: ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a, c = 0; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 5==0) printf("\n");
		}
	}
}