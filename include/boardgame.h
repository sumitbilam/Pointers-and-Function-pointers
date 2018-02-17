#ifndef BOARDGAME_H
#define BOARDGAME_H

struct boardgame{
    char *name;
    char *brandName;
    double price;
};
typedef struct boardgame BoardGame;

/**
 * [createBoardGame description]
 * @param  title static string of title
 * @param  price double
 * @param  title static string of brandname
 * @return  a dynamically created Boardgame.
 */
BoardGame *createBoardGame(char *n, double p, char *bn);

/**
 * Return a boardgame name
 * @param  n BoardGame
 * @return   char* string of name
 */
char *getName(BoardGame *n);

/**
 * Return a brandname of boardgame
 * @param  bn BoardGame
 * @return   char* string of name
 */
char *getBrandName(BoardGame *bn);

/**
 * Get price of boardgame
 * @param  p BoardGame
 * @return   Double price
 */
double getPrice(BoardGame *p);

/**
 * Display a boardgame's name and price.
 * @param void pointer void*b
 */
void printBoardGame(void *b);


#endif


