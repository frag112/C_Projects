// print pyramid out of given symbol
#include "helpers.h"

int main() {
	int rows, center, space = 32, i, j;
	char symbol;
	printf("enter symbol and pyramid height: ");
	scanf("%c %d", &symbol, &rows);
	//printf("this%cis\n",space);// make space
	center = rows - 1;
	StartNewline();
	for (i=1; i<=rows; ++i)
	{
		for (j=center; j>=i;--j)
		{
			printf("%c", space);
		}
		for (j=1; j<=i;++j)
		{
			printf("%c", symbol);
			if (j>1)
			printf("%c", symbol);
		}
		StartNewline();

	}

	return 0;
}