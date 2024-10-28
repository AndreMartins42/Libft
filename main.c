/* #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char    *res;
    char    *trim;
    char    str[]  = "Bonjour comment ca va?";
    char    strtrim[] = "cccccvoceaaaaa";
    char    foundtrim[] = "ca";
    char    str1[] = "1234567890";
    char    str2[] = "1234567890";
    char    str3[] = "1234567890";
    char    str4[] = "1234567890";
    char    teste2[5];
    int     *ptr;
    int     atoi;
    int     a = 'a';
    //char const *joinnew;
    
    //          ATOI
    atoi = ft_atoi("-1234567890");
    printf("\nft_atoi: %i\n", atoi);  
    printf("   atoi: %i\n", atoi);  

    //          BZERO            
    ft_bzero(teste2, sizeof(teste2));
    printf("\nft_bzero: %s\n", teste2);
    bzero(teste2, sizeof(teste2));
    printf("   bzero: %s\n", teste2);

    //          CALLOC              
    ptr = (int *)ft_calloc(5, sizeof(int));
    printf("\nft_calloc: Memoria alocado: ");
    for(int i = 0; i < 5; i++)
        printf("%i, ", ptr[i]);
    printf("\n");
    ptr = (int *)calloc(5, sizeof(int));
    printf("   calloc: Memoria alocado: ");
    for(int i = 0; i < 5; i++)
        printf("%i, ", ptr[i]);
    printf("\n");

    //          ISALNUM
    atoi = ft_isalnum(a);              
    printf("\nft_isalnum: %i\n", atoi);
    atoi = isalnum(a);
    printf("   isalnum: %i\n", atoi);

    //          ISAALPHA
    atoi = ft_isalpha(a);              
    printf("\nft_isalpha: %i\n", atoi);
    atoi = isalpha(a);
    printf("   isalpha: %i\n", atoi);

    //          ISAASCII
    atoi = ft_isascii(a);              
    printf("\nft_isascii: %i\n", atoi);
    atoi = isascii(a);
    printf("   isascii: %i\n", atoi);

    //          ISDIGIT
    atoi = ft_isdigit(a);              
    printf("\nft_isdigit: %i\n", atoi);
    atoi = isdigit(a);
    printf("   isdigit: %i\n", atoi);

    //          ISPRINT
    atoi = ft_isprint(a);              
    printf("\nft_isprint: %i\n", atoi);
    atoi = isprint(a);
    printf("   isprint: %i\n", atoi);

    //          MEMCHR              
    res = ft_memchr(str1, '5', strlen(str1));
    printf("\nft_memchr: %s\n", res);
    res = memchr(str1, '5', strlen(str1));
    printf("   memchr: %s\n", res);
     
    //          MEMCMP              
    atoi = ft_memcmp("abcdefghij", "abcdefgxyz", 7);
    printf("\nft_memcmp: %i\n", atoi);
    atoi = memcmp("abcdefghij", "abcdefgxyz", 7);
    printf("   memcmp: %i\n", atoi);

    //          MEMCPY            
 	ft_memcpy(str1, str1, 9);
	printf("\nft_memcpy: %s\n", str1);
	memcpy(str2, str2, 9);
	printf("   memcpy: %s\n", str2);

    //          MEMMOVE           
    ft_memmove(str3 + 2, str3, 4);
   	printf("\nft_memmove: %s\n", str3);
    memmove(str4 + 2, str4, 4);
   	printf("   memmove: %s\n", str4); 

    //          MEMSET              
    res = ft_memset(teste2, 'a', 4);
    printf("\nft_memset: %s\n", res);
    res = memset(teste2, 'a', 4);
    printf("   memset: %s\n", res);

    //          STRCHR            
    res = ft_strchr(str, '\0');
    printf("\nft_substr: %s\n", res);
    res = strchr(str, '\0');
    printf("   substr: %s\n", res);

/*     //          STRDUP             
    res = ft_strdup("OLA MUNDO");
    printf("\nft_strdup: %s\n", res);

    //          STRJOIN             
    joinnew = ft_strjoin(".teste", "!");
    printf("\nft_strjoin: %s\n", joinnew); 

    //          STRLCAT             
    atoi = ft_strlcat(teste2, str, strlen(str));
    printf("\nft_strlcat: %d\n", atoi);

    //          STRLCPY             
    atoi = ft_strlcpy(teste2, str, strlen(str));
    printf("\nft_strlcpy: %d\n", atoi);

    //          SUBSTR            
    res = ft_substr(str, 8, 11);
    printf("\nft_substr: %s\n", res);

    atoi = ft_strncmp("test\200", "test\0", 6);
    printf("ft_strncmp: %i\n", atoi);
    atoi = strncmp("test\200", "test\0", 6);
    printf("strncmp: %i\n", atoi);

 
    //          STRTRIM
    printf("\ntexto antes: %s", strtrim);        
    trim = ft_strtrim(strtrim, foundtrim);
    printf("\nft_strtrim: %s\n", trim);

    char    teste[] = "Ola cade voce?";
    char    found[] = "cade";
    res = ft_strnstr(teste, found, ft_strlen(teste));
    printf("\n%s", res ); 


}*/