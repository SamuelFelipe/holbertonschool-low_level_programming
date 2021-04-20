# ifndef SEARCH_ALGOS
# define SEARCH_ALGOS

/******************************************************/

# include <stdio.h>
# include <stdlib.h>

/******************************************************/

/*  Use the linear algorithm to find a value index  */
int linear_search(int *, size_t, int);

/* Use the binary search algorithm to find a value index */
int binary_search(int *, size_t, int);
void print_array(int *, int, int);

/******************************************************/

# endif
