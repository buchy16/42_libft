# 42_libft
42 git repository path = git@vogsphere.42lehavre.fr:vogsphere/intra-uuid-18e1ab5d-77e4-46b9-ac08-ca70ba6119f3-7005664-nbuchy
Utility function library that contains the following functions :

isalpha :
Checks if the character 'c' is an alphabetic character (a-z, A-Z).
==Return Value==
1 if 'c' is an alphabetic character, 0 otherwise.


isdigit :
Checks if the character 'c' is a digit (0-9).
==Return Value==
1 if 'c' is a digit, 0 otherwise.


isalnum :
Checks if the character 'c' is alphanumeric (digit or alphabetic character).
==Return Value==
1 if 'c' is alphanumeric, 0 otherwise.


isascii :
Checks if the character 'c' is an ASCII character (0-127).
==Return Value==
1 if 'c' is an ASCII character, 0 otherwise.


isprint :
Checks if the character 'c' is a printable character (includes space).
==Return Value==
1 if 'c' is a printable character, 0 otherwise.


strlen :
Calculates the length of the string 's', excluding the null terminator.
==Return Value==
The length of the string 's'.


memset :
Fills the first 'n' bytes of the memory area pointed to by 'b' with the constant byte 'c'.
==Return Value==
A pointer to the memory area 'b'.


bzero :
Erases the data in the 'n' bytes of the memory area starting at 's' by writing zeros.
==Return Value==
None


memcpy :
Copies 'n' bytes from memory area 's2' to memory area 's1'.
The memory areas must not overlap.
==Return Value==
A pointer to 's1'.


memmove :
Copies 'n' bytes from memory area 's2' to memory area 's1'.
The memory areas may overlap, and the copy will be done correctly.
==Return Value==
A pointer to 's1'.


strlcpy :
Copies up to 'dstsize - 1' characters from 'src' to 'dst', null-terminating the result.
==Return Value==
The total length of the string 'src'.


strlcat :
Appends up to 'dstsize - strlen(dst) - 1' characters from 'src' to 'dst', null-terminating the result.
==Return Value==
The total length of the concatenated string.


ft_toupper :
Converts the lowercase letter 'c' to its uppercase equivalent.
If 'c' is not a lowercase letter, it remains unchanged.
==Return Value==
The uppercase character or 'c' unchanged.


ft_tolower :
Converts the uppercase letter 'c' to its lowercase equivalent.
If 'c' is not an uppercase letter, it remains unchanged.
==Return Value==
The lowercase character or 'c' unchanged.


ft_strchr :
Searches for the character 'c' in the string 's' and returns a pointer to the first occurrence.
==Return Value==
A pointer to the first occurrence of 'c' in 's', or NULL if not found.


ft_strrchr :
Searches for the character 'c' in the string 's' and returns a pointer to the last occurrence.
==Return Value==
A pointer to the last occurrence of 'c' in 's', or NULL if not found.


ft_strncmp :
Compares at most 'n' characters of the strings 's1' and 's2'.
==Return Value==
0 if the strings are equal, a negative value if 's1' is less than 's2', or a positive value if 's1' is greater than 's2'.


ft_memchr :
Searches for the byte 'c' in the first 'n' bytes of the memory area 's'.
==Return Value==
A pointer to the first occurrence of 'c' in 's', or NULL if not found.


ft_memcmp :
Compares the first 'n' bytes of the memory areas 's1' and 's2'.
==Return Value==
0 if the memory areas are equal, a negative value if 's1' is less than 's2', or a positive value if 's1' is greater than 's2'.


ft_strnstr :
Searches for the string 'needle' in the string 'haystack', limiting the search to 'len' bytes.
==Return Value==
A pointer to the beginning of the first occurrence of 'needle' in 'haystack', or NULL if not found.


ft_atoi :
Converts the initial portion of the string 's' to a signed integer.
Whitespace is skipped, and a leading '+' or '-' sign is recognized.
==Return Value==
The converted integer.


ft_calloc :
Allocates memory (using malloc(3)) for an array of 'count' elements, each of size 'size' bytes.
The memory is initialized to zero.
==Return Value==
A pointer to the allocated memory.
NULL if the allocation fails.


ft_strdup :
Allocates memory (using malloc(3)) and returns a duplicate of the string 's'.
==Return Value==
A pointer to the duplicated string.
NULL if the allocation fails.


ft_substr :
Allocates memory (using malloc(3)) and returns a substring from the string 's'.
The substring starts at index 'start' and has a maximum length of 'len'.
==Return Value==
The substring.
NULL if the allocation fails.


ft_strjoin :
Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating 's1' and 's2'.
==Return Value==
The new string.
NULL if the allocation fails.


ft_strtrim :
Allocates memory (using malloc(3)) and returns a copy of 's1' with characters from 'set' removed from the beginning and the end.
==Return Value==
The trimmed string.
NULL if the allocation fails.


ft_split :
Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter.
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
The string created from the successive applications of 'f'.
Returns NULL if the allocation fails.


ft_striteri :
Applies the function 'f' to each character of the string passed as argument, passing its index as the first argument.
Each character is passed by address to 'f' so it can be modified if necessary.
==Return Value==
None


ft_putchqr_fd :
Outputs the character 'c' to the specified file descriptor.
==Return Value==
None

ft_putstr_fd :
Outputs the string 's' to the specified file descriptor.
==Return Value==
None


ft_putendl_fd :
Outputs the string 's' to the specified file descriptor followed by a newline.
==Return Value==
None


ft_putnbr_fd :
Outputs the integer 'n' to the specified file descriptor.
==Return Value==
None


ft_lstnew :
Allocates memory (using malloc(3)) and returns a new node. 
The 'content' member variable is initialized with the given parameter 'content'.
The variable 'next' is initialized to NULL.
==Return Value==
A pointer to the new node


ft_lstadd_front :
Adds the node 'new' at the beginning of the list.
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
Adds the node 'new' at the end of the list.
==Return Value==
None


ft_lstdelone :
Takes a node as parameter and frees its content using the function 'del'. 
Free the node itself but does NOT free the next node.
==Return Value==
None


ft_lstclear :
Deletes and frees the given node and all its successors, using the function 'del' and free(3).
Finally, set the pointer to the list to NULL.
==Return Value==
None


ft_lstiter :
Iterates through the list 'lst' and applies the function 'f' to the content of each node.
==Return Value==
None


ft_lstmap :
Iterates through the list 'lst', applies the function 'f' to each node's content, and creates a new list resulting of the successive applications of the function 'f'.
The 'del' function is used to delete the content of a node if needed.
==Return Value==
The new list.
NULL if the allocation fails.


ft_printf :
Same as the original printf

get_next_line :
return a line of a text document, with each call, it will send the next line.
when there nothings to read (or when an error occured), null should be returned.
