#include <stdio.h>

int main(void) {
	int arr[100] = {0};

	for(int i = 0; i < 100; i++) {
		arr[i] = i + 1;
		if(arr[i] < 10) {
			printf(" %d ", arr[i]);
		} else {
			printf("%d ", arr[i]);
		}
		if(i != 0 && (i + 1) % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}
