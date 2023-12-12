/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:20:44 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/12 17:10:26 by tanselmo         ###   ########.fr       */
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

/* #include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "a";
   char dest[50];
   strcpy(dest,"");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+0);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
} */

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	slen;
    char	*sub;
    size_t	i;

    slen = ft_strlen(s);
    if (slen < start)
        return (NULL);
    if (slen < start + len)
        len = slen - start;
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}

int main()
{
    char const *string = "0123456789";
    unsigned int start = 2;
    
    printf("%s\n", ft_substr(string, start, 6));
    return (0);
} */

/* #include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*s3;
    int		i;
    int		a;
    int		s1_len;
    int		s2_len;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    a = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    s3 = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (!s3)
        return (NULL);
    while (s1[i])
        s3[a++] = s1[i++];
    i = 0;
    while (s2[i])
        s3[a++] = s2[i++];
    s3[a] = '\0';
    return (s3);
} */

/* #include "libft.h"
#include <stdlib.h>

static int	is_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

static int	first_position(char const *s1, const char *set)
{
    int	i;

    i = 0;
    while (s1[i] && is_set(s1[i], set))
    {
        i += 1;
    }
    return (i);
}

static int	last_position(char const *s1, const char *set)
{
    int	i;

    i = ft_strlen(s1) - 1;
    while (i >= 0 && is_set(s1[i], set))
        i -= 1;
    return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char	*trim;
    int		i;
    int		len;
    int		start;

    if (!set)
        return ((char *)s1);
    if (s1 != NULL)
    {
        start = first_position(s1, set);
        len = last_position(s1, set) - start + 1;
        trim = (char *)malloc(sizeof(char) * (len + 1));
        if (!trim)
            return (NULL);
        i = 0;
        while (i < len)
        {
            trim[i] = s1[start + i];
            i += 1;
        }
        trim[i] = '\0';
        return (trim);
    }
    return (NULL);
}

int	main()
{
    char const *s1 = "    Hola como estas?    ";
    char const *set = " ";

    printf("%s\n", ft_strtrim(s1, set));
    return (0);
} */

/* #include "libft.h"

static int	ft_isset(char c, const char *set)
{
    while (*set)
        if (*set++ == c)
            return (1);
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    const char		*start;
    const char		*end;
    char			*trim;
    size_t			i;

    if (!s1 || !set)
        return (NULL);
    start = s1;
    end = s1 + ft_strlen(s1) - 1;
    while (*start && ft_isset(*start, set))
        start++;
    while (end > start && ft_isset(*end, set))
        end--;
    trim = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!trim)
        return (NULL);
    i = 0;
    while (start <= end)
        trim[i++] = *start++;
    trim[i] = '\0';
    return (trim);
}

int	main()
{
    char const *s1 = "    Hola como estas?    ";
    char const *set = " ";

    printf("%s\n", ft_strtrim(s1, set));
    return (0);
} */