Function pointers - Function pointers tasks teaches the uses of passing functions as parameter    argument to another functions using pointers.
1. void print_name(char *name, void (*f)(char *)) - function that prints a name passed as argument to another function.
2. void array_iterator(int *array, size_t size, void (*action)(int)) - A function that execute a function given as a parameter on each element of an array.
3. int int_index(int *array, int size, int (*cmp)(int)) - A function that searches for an integer passed as a function parameter.
