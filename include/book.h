#ifndef BOOK_H
#define BOOK_H

struct book {
   double price;
   char *name;
};
typedef struct book Book;


/**
 * [createBook description]
 * @param  title static string of title
 * @param  price double
 * @return  a dynamically created Book.
 */
Book *createBook(char *n, double p);

/**
 * Return a book name
 * @param  n Book
 * @return   char* string of name
 */
char *getBookName(Book *n);


/**
 * Get price of book
 * @param  p Book
 * @return   Double price
 */
double getBookPrice(Book *p);


/**
 * Display a book's name and price.
 * @param void pointer void*b
 */
void printBook(void *b);

#endif
