#include <stdio.h>
#include <stdlib.h>
#include "boardgame.h"
#include "book.h"
#include "store.h"


int main(int argc, char **argv) {
    
    Book *b1 = createBook("The Adventure", 18.00);
    Store *s1 = createStore((void *) b1, &printBook);
    displayStore(s1);
    
    Book *b2 = createBook("C-For Beginners", 30.50);
    Store *s2 = createStore((void *) b2, &printBook);
    displayStore(s2);
    
    
    BoardGame *bg1 = createBoardGame("Ladders and Snake", 23.00, "Fungames");
    Store *s3 = createStore((void *) bg1, &printBoardGame);
    displayStore(s3);
    
    BoardGame *bg2 = createBoardGame("Chess", 15.30, "JWK Games");
    Store *s4 = createStore((void *) bg2, &printBoardGame);
    displayStore(s4);
    
    free(b1);
    free(s1);
    free(b2);
    free(s2);
    free(bg1);
    free(s3);
    free(bg2);
    free(s4);
   
    return 0;
}


