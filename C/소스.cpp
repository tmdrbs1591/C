#include <stdio.h>

int main() {
	
	int t;
	int a;
	scanf_s("%d", &t);
	int min;
	int max; 

	for (int i = 0; i < t; i++)
	{
		scanf_s("%d", &a);
		if (max < a)
			max = a;
		if (min > a)
			min = a;
		
	}

	printf("%d,%d", min, max);
	return 0;
}