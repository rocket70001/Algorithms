#include <stdio.h>
#include <stdlib.h>

//
void merge(int arr[], int left, int mid, int right) {
    int i, j, k; //인덱싱을 위한 선언, 
	int n1 = mid - left + 1; //왼 편 첫 인덱스 변수 
    int n2 = right - mid; //오른편 첫 인덱스 변수

    int *L = (int*)malloc(n1 * sizeof(int)); // 왼편과 오른편 배열을 동적으로 생성한다.
    int *R = (int*)malloc(n2 * sizeof(int));

	// 각 배열 인덱스에 arr[]배열을 나눠 순차적으로 담는다.
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
	//인덱스  초기화
    k = left;
	// 왼편의 끝을 시작으로 왼편과 오른편으로 나누어진 배열의 값을 비교해 더 작은 값을 채워넣는다. 한 배열의 작업을 모두 끝낼 때까지 반복한다.
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

	//왼편과 오른편 배열 중 다 방문하지 않은 배열을 arr[]의 k번째부터 채워넣는다.
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

	// 병합 정렬을 위해 동적으로 할당한 배열의 메모리 해제
    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; //중간값을 구한다.

        mergeSort(arr, left, mid); //중간 값을 기준으로 왼편의 배열을 다시 중간 값을 기준으로 두 개로 나누는 재귀적 함수
        mergeSort(arr, mid + 1, right); //상동, 오른편으로 나눈다. 

        merge(arr, left, mid, right); //나누어진 배열과 왼, 중, 오른편 값을 토대로 합치는 함수
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    printf("Sorted array is: ");
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
