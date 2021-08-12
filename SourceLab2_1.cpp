#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float num1, num2;
int main() {
	printf("Enter the number ");
	scanf("%f %f", &num1, &num2);
	printf("Summation = %.2f \n", num1 + num2);
	printf("Difference = %.2f \n", num1 - num2);
	printf("Product = %.2f \n", num1 * num2);
	printf("Quotient = %.2f", num1 / num2);
	return 0;
}