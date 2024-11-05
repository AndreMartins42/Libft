#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// -----------------------------------------------

int main(void)
{
    // ft_atoi
    printf("ft_atoi: %d | %d\n", ft_atoi("42"), atoi("42"));

// -----------------------------------------------

    // ft_bzero
    char bzero_test[5] = "abcd";
    ft_bzero(bzero_test, 2);
    printf("ft_bzero: %c %c %c\n", bzero_test[0], bzero_test[1], bzero_test[2]);

// -----------------------------------------------

    // ft_calloc
    int *calloc_test = ft_calloc(2, sizeof(int));
    printf("ft_calloc: %d %d\n", calloc_test[0], calloc_test[1]);
    free(calloc_test);

// -----------------------------------------------

    // ft_isalnum
    printf("ft_isalnum: %d | %d\n", ft_isalnum('a'), isalnum('a'));

// -----------------------------------------------

    // ft_isalpha
    printf("ft_isalpha: %d | %d\n", ft_isalpha('A'), isalpha('A'));

// -----------------------------------------------

    // ft_isascii
    printf("ft_isascii: %d | %d\n", ft_isascii(128), isascii(128));

// -----------------------------------------------

    // ft_isdigit
    printf("ft_isdigit: %d | %d\n", ft_isdigit('5'), isdigit('5'));

// -----------------------------------------------

    // ft_isprint
    printf("ft_isprint: %d | %d\n", ft_isprint(31), isprint(31));

// -----------------------------------------------

    // ft_itoa
    printf("ft_itoa: %s\n", ft_itoa(42));

// -----------------------------------------------

    // ft_memchr
    char memchr_test[] = "Hello";
    printf("ft_memchr: %s | %s\n", (char *)ft_memchr(memchr_test, 'e', 5), (char *)memchr(memchr_test, 'e', 5));

// -----------------------------------------------

    // ft_memcmp
    printf("ft_memcmp: %d | %d\n", ft_memcmp("abc", "abc", 3), memcmp("abc", "abc", 3));

// -----------------------------------------------

    // ft_memcpy
    char memcpy_dest[6];
    ft_memcpy(memcpy_dest, "Hello", 6);
    printf("ft_memcpy: %s\n", memcpy_dest);

// -----------------------------------------------

    // ft_memmove
    char memmove_test[] = "Hello";
    ft_memmove(memmove_test + 2, memmove_test, 3);
    printf("ft_memmove: %s\n", memmove_test);

// -----------------------------------------------

    // ft_memset
    char memset_test[] = "Hello";
    ft_memset(memset_test, 'a', 2);
    printf("ft_memset: %s\n", memset_test);

// -----------------------------------------------

    // ft_putchar_fd
    printf("ft_putchar_fd: ");
    ft_putchar_fd('A', 1);
    printf("\n");

// -----------------------------------------------

    // ft_putendl_fd
    printf("ft_putendl_fd: ");
    ft_putendl_fd("Hello", 1);

// -----------------------------------------------

    // ft_putnbr_fd
    printf("ft_putnbr_fd: ");
    ft_putnbr_fd(42, 1);
    printf("\n");

// -----------------------------------------------

    // ft_putstr_fd
    printf("ft_putstr_fd: ");
    ft_putstr_fd("Hello", 1);
    printf("\n");

// -----------------------------------------------

    // ft_split
    char **split_result = ft_split("Hello World", ' ');
    printf("ft_split: %s %s\n", split_result[0], split_result[1]);
    free(split_result[0]);
    free(split_result[1]);
    free(split_result);

// -----------------------------------------------

    // ft_strchr
    printf("ft_strchr: %s | %s\n", ft_strchr("Hello", 'e'), strchr("Hello", 'e'));

// -----------------------------------------------

    // ft_strdup
    printf("ft_strdup: %s\n", ft_strdup("Hello"));

// -----------------------------------------------

    // ft_striteri
    void sample_func(unsigned int i, char *c) { *c = *c - 32; }
    char striteri_test[] = "hello";
    ft_striteri(striteri_test, sample_func);
    printf("ft_striteri: %s\n", striteri_test);

// -----------------------------------------------

    // ft_strjoin
    printf("ft_strjoin: %s\n", ft_strjoin("Hello, ", "World!"));

// -----------------------------------------------

    // ft_strlcat
    char strlcat_dest[11] = "Hello";
    printf("ft_strlcat: %zu | %zu\n", ft_strlcat(strlcat_dest, "World", 11), strlcat(strlcat_dest, "World", 11));

// -----------------------------------------------

    // ft_strlcpy
    char strlcpy_dest[6];
    printf("ft_strlcpy: %zu | %zu\n", ft_strlcpy(strlcpy_dest, "Hello", 6), strlcpy(strlcpy_dest, "Hello", 6));

// -----------------------------------------------

    // ft_strlen
    printf("ft_strlen: %zu | %zu\n", ft_strlen("Hello"), strlen("Hello"));

// -----------------------------------------------

    // ft_strmapi
    char strmapi_test[] = "abc";
    char *result_mapi = ft_strmapi(strmapi_test, [](unsigned int i, char c) -> char { return c - 32; });
    printf("ft_strmapi: %s\n", result_mapi);
    free(result_mapi);

// -----------------------------------------------

    // ft_strncmp
    printf("ft_strncmp: %d | %d\n", ft_strncmp("Hello", "Hello", 5), strncmp("Hello", "Hello", 5));

// -----------------------------------------------

    // ft_strnstr
    printf("ft_strnstr: %s | %s\n", ft_strnstr("Hello World", "World", 11), strnstr("Hello World", "World", 11));

// -----------------------------------------------

    // ft_strrchr
    printf("ft_strrchr: %s | %s\n", ft_strrchr("Hello", 'l'), strrchr("Hello", 'l'));

// -----------------------------------------------

    // ft_strtrim
    printf("ft_strtrim: %s\n", ft_strtrim("   Hello   ", " "));

// -----------------------------------------------

    // ft_substr
    printf("ft_substr: %s\n", ft_substr("Hello World", 6, 5));

// -----------------------------------------------

    // ft_tolower
    printf("ft_tolower: %d | %d\n", ft_tolower('A'), tolower('A'));

// -----------------------------------------------

    // ft_toupper
    printf("ft_toupper: %d | %d\n", ft_toupper('a'), toupper('a'));

// -----------------------------------------------

    // ft_lstnew
    t_list *node1 = ft_lstnew("Node 1");
    printf("ft_lstnew: %s\n", (char *)node1->content);

// -----------------------------------------------

    // ft_lstadd_front
    t_list *node2 = ft_lstnew("Node 2");
    ft_lstadd_front(&node1, node2);
    printf("ft_lstadd_front: %s\n", (char *)node1->content);

// -----------------------------------------------

    // ft_lstadd_back
    t_list *node3 = ft_lstnew("Node 3");
    ft_lstadd_back(&node1, node3);
    printf("ft_lstadd_back: %s\n", (char *)ft_lstlast(node1)->content);

// -----------------------------------------------

    // ft_lstsize
    printf("ft_lstsize: %d\n", ft_lstsize(node1));

// -----------------------------------------------

    // ft_lstdelone
    ft_lstdelone(node3, free);
    printf("ft_lstdelone: Node 3 deleted\n");

// -----------------------------------------------

    // ft_lstclear
    ft_lstclear(&node1, free);
    printf("ft_lstclear: All nodes cleared\n");

// -----------------------------------------------


    



 // ft_lstnew
	t_list *node1 = ft_lstnew("sou o primeiro - node1");
	printf("ft_lstnew:       %s\n", (char *)node1->content);

// ft_lstadd_front
	t_list *node2 = ft_lstnew("sou o segundo - node2");
	ft_lstadd_front(&node1, node2);
	printf("ft_lstadd_front: %s\n", (char *)node1->content);

// ft_lstadd_back
	t_list *node3 = ft_lstnew("sou o terceiro - node3");
	ft_lstadd_back(&node1, node3);
	printf("ft_lstadd_back:  %s\n", (char *)ft_lstlast(node1)->content);

//  ft_lstsize
	int count = ft_lstsize(node1);
	printf("ft_lstsize: somos %i nodes\n", count);

// ft_lstlast
	printf("ft_lstlast: %s\n", (char *)ft_lstlast(node1)->content);

// ft_lstiter
	void print_node(void *content)
	{
		printf("\ncontent = %s\n", (char *)content);
	}
	ft_lstiter(node1, print_node);




}
