#include <stdio.h>
#include "book.h"
#include <stdlib.h>

Book *createBook(char *n, double p) {
    Book *bptr = malloc(sizeof(Book));
    
    bptr->price = p;
    bptr->name = n;
    
    return bptr;
}

char *getBookName(Book *n){
    return n->name;	
}

double getBookPrice(Book *p){
    return p->price;
}

void printBook(void *ptr){
	Book *b;
	b = (Book*)(ptr);
    printf("%s\t%f\n", getBookName(b), getBookPrice(b));
}
