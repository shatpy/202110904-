#include <stdio.h>
int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5 ,6};
	int arr2[6] = { 7,8,9,10,11,12 };
	int* farr1 = &arr1[0];
	int* farr2 = &arr2[0];
	int i, middle;
	printf("arr1:");
	for (i = 0; i < 6; i++)
		printf(" %d", arr1[i]);
	printf("\narr2:");
	for (i = 0; i < 6; i++)
		printf(" %d", arr2[i]);
	for (i = 0; i < 6; i++)
	{
		middle = *farr1;
		*farr1 = *farr2;
		*farr2 = middle;
		farr1++;
		farr2++;	
	}
	printf("\nafter swap\narr1:");
	for (i = 0; i < 6; i++)
		printf(" %d", arr1[i]);
	printf("\narr2:");
	for (i = 0; i < 6; i++)
		printf(" %d", arr2[i]);
	return 0;
}