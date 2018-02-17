# Pointers-and-Function-pointers
The main goal of the this program to understand how pointers, void pointers and 
function pointers work. In this program a store has been created which shows a 
list of its two inventories (Books and Boardgame). Book with its name and price and 
boardgame with its name, price and brandname. we have created separate print function for 
both book and boardgame in their associated .c files which doesn't get called directly from main.

To print the information we have created a separate displayStore function which gets called from main.
This function take a pointer of type Store(struct), which has been passed from createStore function takes 
two parameters (a void pointer, and a void fucntion pointer). 
