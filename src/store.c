#include <stdio.h>
#include <stdlib.h>
#include "store.h"

Store *createStore(void *p, void(*funcptr)(void *ptr)){
	Store *s = malloc(sizeof(Store));
	s->item = p;
	s->fptr = funcptr;
	
	return s;
}

void displayStore(Store *s) {
	
	s->fptr(s->item);
		
}


