#include <stdio.h>

void SwitchMinMax(int *a, int *b)
{
	if (*a > *b)
	{
		*a = *a - *b;
		*b = *a + *b;
		*a = *b - *a;
	}
}
void StartNewline() {
	printf("\n");
}