#include <stdio.h>

int main(void)
{
	int n, m = 0;
	int i, j, k;
	int arr[100] = { };
	int result = 0;
	int best_result = 0;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			for (k = j + 1; k < n; k++)
			{
				result = arr[i] + arr[j] + arr[k];

				if ((m - result < m - best_result) && (m - result >= 0))
					best_result = result;
			}
		}
	}

	printf("%d", best_result);

	return 0;
}
