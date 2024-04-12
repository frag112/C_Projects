// find if given number is armstrong
#include <stdio.h>
#include <math.h>

int main() {
	int input, orinalNum, remainder, result = 0, n =0;
	printf("input number\n");
	scanf("%d", &input);
	orinalNum = input;
	while (orinalNum != 0)
	{
		orinalNum /= 10;
		++n;
	}
	orinalNum = input;
	while (orinalNum != 0)
	{
		remainder = orinalNum % 10;
		result += pow(remainder,n);
		orinalNum /= 10;
	}
	if (result == input)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not armstrong number\n");
	}

	return 0;
}