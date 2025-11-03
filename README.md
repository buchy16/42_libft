# 42_libft
Utility function library that contains the following functions :

isalpha :

isdigit :

isalnum :

isascii :

isprint :

strlen :

memset :

bzero :

memcpy :

memmove : 

strlcpy :

strlcat :

ft_toupper :

ft_tolower :

ft_strchr :

ft_strrchr :

ft_strncmp :

ft_memchr :

ft_memcmp :

ft_strnstr :

ft_atoi :

ft_calloc :

ft_strdup :

ft_substr :
Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.
==Return Value==
The substring.
NULL if the allocation fails.


ft_strjoin :
Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’.
==Return Value==
The new string.
NULL if the allocation fails.


ft_strtrim :
Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.
==Return Value==
The trimmed string.
NULL if the allocation fails.


ft_split :
Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.
==Return Value==
The array of new strings resulting from the split.
NULL if the allocation fails.


ft_itoa :
Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument.
Negative numbers are handled.
==Return Value==
The string representing the integer.
NULL if the allocation fails.


ft_strmapi :
Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second.
A new string is created (using malloc(3)) to store the results from the successive applications of f.
==Return Value==
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.


ft_striteri :
Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument.
Each character is passed by address to ’f’ so it can be modified if necessary.
==Return Value==
None


ft_putchqr_fd :
Outputs the character ’c’ to the specified file descriptor.
==Return Value==
None

ft_putstr_fd :
Outputs the string ’s’ to the specified file descriptor.
==Return Value==
None


ft_putendl_fd :
Outputs the string ’s’ to the specified file descriptor followed by a newline.
==Return Value==
None


ft_putnbr_fd :
Outputs the integer ’n’ to the specified file descriptor.
==Return Value==
None


ft_lstnew :
Allocates memory (using malloc(3)) and returns a new node. 
The ’content’ member variable is initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.
==Return Value==
A pointer to the new node


ft_lstadd_front :
Adds the node ’new’ at the beginning of the list.
==Return Value==
None


ft_lstsize :
Counts the number of nodes in the list.
==Return Value==
The length of the list


ft_lstlast :
Returns the last node of the list.
==Return Value==
Last node of the list


ft_lstadd_back :
Adds the node ’new’ at the end of the list.
==Return Value==
None


ft_lstdelone :
Takes a node as parameter and frees its content using the function ’del’. 
Free the node itself but does NOT free the next node.
==Return Value==
None


ft_lstclear :
Deletes and frees the given node and all its successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.
==Return Value==
None


ft_lstiter :
Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.
==Return Value==
None


ft_lstmap :
Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’.
The ’del’ function is used to delete the content of a node if needed.
==Return Value==
The new list.
NULL if the allocation fails.
