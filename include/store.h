#ifndef STORE_H
#define STORE_H

struct store{
    void *item;
    void (*fptr) (void *ptr);	
};
typedef struct store Store;

/**
 * [createStore description]
 * @param  void pointer void *p
 * @param  void function pointer void(*funcptr)
 * @return  a dynamically created Store.
 */
Store *createStore(void *p, void(*funcptr)(void *ptr));

/**
 * Access the data member of sturct Store through function ptr
 * @param pointer to struct 
 */
void displayStore(Store *s);

   
#endif
