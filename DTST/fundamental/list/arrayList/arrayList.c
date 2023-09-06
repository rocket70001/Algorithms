// arrayList.c

#include <stdio.h>
#include <stdlib.h>
#include "arrayList.h"

struct ArrayList {
	int* array;
	int size;
	int capacity;
};

ArrayList* createArrayList(int maxIdx) {
	ArrayList* list = (ArrayList*)malloc(sizeof(ArrayList));
	if(list == NULL) {
		// 메모리 할당 실패 처리
		return NULL;
	}
	list -> array = (int*)malloc(sizeof(int) * maxIdx);
	if(list -> array == NULL) {
		free(list);
		return NULL;
	}
	list -> size = 0;
	list -> capacity = maxIdx;
	return list;
}

void destroyArrayList(ArrayList *list) {
	free(list->array); // 정수형 포인터 메모리 해제 후 정수형 포인터를 가진 구조체의 메모리 해제
	free(list);
}

void addElement(ArrayList *list, int element) {
	if(list -> size == list -> capacity) {
		list -> array = (int*)realloc(list, sizeof(int) * list -> size * 2);
	}
	list -> array[list -> size] = element;
	list -> size++;
}

int getElement(ArrayList *list, int index) {
	if (index < 0 || index >= list -> size) {
		printf("유효하지 않은 범위입니다.");
		return -404;
	}
	return list -> array[index];
}

int getSize(ArrayList *list) {
	return list -> size; 
}


