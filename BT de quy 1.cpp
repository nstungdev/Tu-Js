#include <stdio.h>
#include <conio.h>

float fraction(int n);
int main()
{
    int number;
	printf("Type a number: ");
    while ((scanf("%d", &number)) != EOF)
        printf("Result: %.2f\n", fraction(number));
}
float fraction(int n)
{
    if (n == 1)
        return 1;
    return ((float) 1)/n + fraction(n-1);
}
