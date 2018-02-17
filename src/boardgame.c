#include <stdio.h>
#include "boardgame.h"
#include <stdlib.h>

BoardGame *createBoardGame(char *n, double p, char *bn) {
    BoardGame *bgptr = malloc(sizeof(BoardGame));
    
    bgptr->name = n;
    bgptr->price = p;
    bgptr->brandName = bn;
    
    return bgptr;
}

char *getName(BoardGame *n){
    return n->name;	
}

char *getBrandName(BoardGame *bn){
    return bn->brandName;	
}

double getPrice(BoardGame *p){
    return p->price;
}

void printBoardGame(void *b){
	BoardGame *bg;
	bg = (BoardGame*)(b);
    printf("%s\t%f\t%s\n", getName(bg), getPrice(bg), getBrandName(bg));
}

