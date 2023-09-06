//ARRAYLIST_H

#ifndef __ARRAYLIST_H__
#define __ARRAYLIST_H__

typedef struct ArrayList ArrayList;

ArrayList* createArrayList(int maxIdx);
void destroyArrayList(ArrayList* list);
void addElement(ArrayList* list, int element);
int getElement(ArrayList* list, int index);
int getSize(ArrayList* list);

#endif
