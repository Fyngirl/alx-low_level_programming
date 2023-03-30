Singly linked lists
A collection of C functions that manipulate singly linked lists.

Functions
0. Print list
size_t print_list(const list_t *h);
This function prints all the elements of a list_t list.

1. List length
size_t list_len(const list_t *h);
This function returns the number of elements in a list_t list.

2. Add node
list_t *add_node(list_t **head, const char *str);
This function adds a new node at the beginning of a list_t list. The string str needs to be duplicated.
