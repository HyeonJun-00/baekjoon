#include <stdio.h>

void	quickSort(int arr[], int L, int R) 
{
	int	left = L, right = R;
	int	pivot = arr[(L + R) / 2]; 
	int	temp;

	do
	{
		while (arr[left] < pivot) 
			left++;
		while (arr[right] > pivot) 
			right--;
		if (left<= right) 
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	} while (left <= right); 
	if (L < right) quickSort(arr, L, right); 
	if (left < R) quickSort(arr, left, R); 
}

int	main()
{
	int	i = 0;
	int	arrLength = 0;

	scanf("%d", &arrLength);
	int	arr[arrLength];
	int	maxLength = 1;
	int	maxIndex = 0;
	int	output = 0;

	for (i = 0; i < arrLength; i++) scanf("%d", &arr[i]);
	quickSort(arr, 0, arrLength - 1);
	for (i = 0; i < arrLength; i++) {
		if (i + 1 < arrLength && maxLength < arr[i + 1] - arr[i]) {
			maxIndex = i;
			maxLength = arr[i + 1] - arr[i];
			output = arr[maxIndex + 1] - (maxLength / 2) - (maxLength % 2);
			if (output - arr[maxLength] > arr[maxLength + 1] - output) {
				output--;
			}
		}
	}
	if	(maxLength < 2) printf("-1\n");
	else	printf("%d\n", output);

	return 0;
}
