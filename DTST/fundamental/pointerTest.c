#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *ptrArr;
	int arr[20] = {0};

	ptrArr = (int*)malloc(sizeof(int) * 20);
	ptrArr[0] = 17;
	arr[0] = 17;

	free(&ptrArr[0]);
	printf("%d", ptrArr[0]);
	free(&arr[0]);
	printf("%d", arr[0]);
	
}
