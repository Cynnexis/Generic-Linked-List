#include <stdio.h>
#include <stdlib.h>

#include "boolean.h"
#include "list.h"

void list_new(List* l) {
	l->head = NULL;
}

int list_length(List l) {
	int length = 0;
	Cell* cell = l.head;
	
	while (cell != NULL)
	{
		length++;
		cell = cell->next;
	}
	return length;
}

Cell* list_head(List l) {
	return l.head;
}

Cell* list_tail(List l) {
	if (l.head == NULL)
		return NULL;
	Cell* cell = l.head;
	while (cell->next != NULL)
		cell = cell->next;
	return cell;
}

Cell* list_getCell(List l, int index) {
	Cell* cell = l.head;
	int i;
	
	for (i = 0 ; i < index && cell != NULL ; i++)
		cell = cell->next;
	
	if (cell == NULL)
		return NULL;
	
	return cell;
}

void* list_get(List l, int index) {
	int i;
	Cell* cell = l.head;
	
	for (i = 0 ; i < index && cell != NULL ; i++)
		cell = cell->next;
	
	if (cell == NULL)
		return NULL;
	
	return cell->data;
}

/*void add(List* l, void* value) {
	Cell* tail = getTail(*l);
	
	if (tail != NULL)
	{
		Cell* new = malloc(sizeof(Cell));
		new->value = value;
		new->next = NULL;
		tail->next = new;
	}
	else // if tail is the head (first element):
	{
		tail = malloc(sizeof(Cell));
		tail->value = value;
		tail->next = NULL;
		l->head = tail;
	}
}*/
