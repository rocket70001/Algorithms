#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	List list;
	int data;
	int sum;
	ListInit(&list);

	for(int i=0; i < 10; i++)
		LInsert(&list, i);
	for(int i = 0; i < 10; i++)
	{
		sum += list[i];
		printf("%d \n", sum);
	}
	for(int i = 0; i < 10; i++)
	{
		if(list[i] % 2 == 0 || list[i] % 3 == 0)
			LRemove(&list, i);
	}
	while(list[i])
	{	
		printf("%d \n", list[i]);
		i++;
	}
	return 0;
}
