#include <stdio.h>

int main(void)
{
	int i = 0;
	int num;
	double arrx[10000] = {0, };
	double arry[10000] = {0, };
	double result1 = 0;
	double result2 = 0;

	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		scanf_s("%Lf %Lf", &arrx[i], &arry[i]);
	
	arrx[num] = arrx[0];
	arry[num] = arry[0];

	for (i = 0; i < num; i++)
	{
			result1 = result1 + (arrx[i] * arry[i + 1]);
			result2 = result2 + (arrx[i + 1] * arry[i]);
	}
	
	if((result1 > 0 && result2 > 0) || (result1 < 0 && result2 < 0))
		result1 = (result1 + result2) / 2;
	else
		result1 = (result1 - result2) / 2;

	if (result1 < 0)
		result1 = result1 * (-1);
		
	printf("%0.1lf", result1);

	return 0;
}
