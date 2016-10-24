#ifndef __LIST_H__
#define __LIST_H__

#include "boolean.h"

typedef struct Cell {
	void* data;
	struct Cell* next;
} Cell;

typedef struct {
	Cell* head;
} List;

/** CONSTRUCTOR **/
extern void list_new(List* l);

/** DESTRUCTOR **/
extern void list_delete(List* l);

/** ACCESSORS **/
extern int list_length(List l);
extern Cell* list_head(List l);
extern Cell* list_tail(List l);
extern Cell* list_getCell(List l, int index);
extern void* list_get(List l, int index);
/*extern bool belongs(List l, void* value);
extern void printList(List l, void (*display)(void*));*/

/** MUTATORS **/
/*extern void list_add(List* l, void* value);
extern bool list_addAt(List* l, int index, void* value);
extern bool list_delete(List* l, int index);
extern bool list_set(List* l, int index, void* value);
extern bool list_reset(List* l);
extern void list_sort(List *l, bool (*compare)(void*));*/

/** OTHERS **/
/*extern int* list_toArray(List l);
extern void list_fromArray(List* l, int* array, int n);*/

#endif
