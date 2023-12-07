/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:20:44 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/07 17:31:25 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abc", 7);
   memcpy(str2, "abc", 7);

   ret = memcmp(str1, str2, 7);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
} */

/* #include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] < a2[i])
		{
			return (-1);
		}
		else if (a1[i] > a2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
} */

/* int	main()
{
	char	*s1;
    char	*s2;

    s1 = "abc";
    s2 = "abc";
    printf("%d\n", ft_memcmp(s1, s2, 7));
    return (0);
} */

/* #include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while (n != 0)
	{
		while ()
		{
			if ()
		}
		return (*(a1 - 1) - *(a2 - 1))
	}
	return (0);
} */

/* int	main()
{
	char	*s1;
    char	*s2;

    s1 = "abc";
    s2 = "abc";
    printf("%d\n", ft_memcmp(s1, s2, 7));
    return (0);
} */
/* 
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (dst <= src)
	{
		while (len-- != '\0')
			*cdst++ = *csrc++;
	}
	else if (dst > src)
	{
		cdst += len - 1;
		csrc += len - 1;
		while (len-- != '\0')
		{
			*cdst-- = *csrc--;
		}
		return (dst);
	}
	return (0);
} */

/* 
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char	*cdst;
    char	*csrc;

    cdst = (char *)dst;
    csrc = (char *)src;
    if (!dst && !src)
        return (0);
    if (dst <= src)
    {
        while (len--)
            *cdst++ = *csrc++;
    }
    else
    {
        cdst += len - 1;
        csrc += len - 1;
        while (len--)
        {
            *cdst-- = *csrc--;
        }
    }
    return (dst);
}

int	main()
{
    char	s1[] = "abcdefg";
    char	s2[] = "1234567";
    printf("%s\n%s\n", s1, s2);
    ft_memmove(s1, s2, 4);
    printf("%s\n%s\n", s1, s2);
    return (0);
} */

/* #include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "";
   char dest[50];
   strcpy(dest,"");
   printf("Before memcpy, dest = %s\n", dest);
   memcpy(dest, src, 5);
   printf("After memcpy, dest = %s\n", dest);
   
   return(0);
} */

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "a";
   char dest[50];
   strcpy(dest,"");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+0);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
