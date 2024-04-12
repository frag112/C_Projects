// print all armstrongs numbers in given range
#include "helpers.h"
#include <math.h>

int main()
{
	int input1, input2, originalN, n = 0, result = 0, remainder;
	printf("enter numbers: ");
	scanf("%d %d", &input1, &input2);
	SwitchMinMax(&input1, &input2);

	printf("armstrong numbers in this range: ");
	for ( ; input1 <= input2; ++input1)
	{

		originalN = input1;
		while (originalN != 0)
		{
			originalN /= 10;
			++n;
		}
		originalN = input1;
		while (originalN != 0)
		{
			remainder = originalN % 10;
			result += pow(remainder, n);
			originalN /= 10;
		}
		if (result == input1)
		{
			printf(" %d", result);
		}
		n = 0;
		result = 0;
	}
	return 0;
}