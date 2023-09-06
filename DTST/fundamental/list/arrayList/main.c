#include <stdio.h>
#include "arrayList.h"

int main(void) {
	ArrayList* list = createArrayList(20);

	for(int k = 0; k < 20; k++) {
		addElement(list, k * 3);
	}
	for(int i = 0; i < getSize(list); i++) {
		printf("%d\n", getElement(list, i));
	}
	destroyArrayList(list);

	return 0;
}
