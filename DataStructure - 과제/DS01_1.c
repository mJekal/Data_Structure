#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char file[100] = {0};
	int n, min = INT_MAX, max = INT_MIN;

	scanf("%s", file);

	fp = fopen(file, "r");

	while (fscanf(fp, "%d", &n) != EOF)
	{
		if (min > n)
        {
		min = n;
		} else if (n > max){
			max = n;
		}
			
	}

	printf("Min: %d\n", min);
	printf("Max: %d", max);
	fclose(fp);

    return 0;
}
