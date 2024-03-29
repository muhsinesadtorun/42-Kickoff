/* ************************************************************************** */
/*                                                                            */
/*   get_next_line_utils.c                                :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:20 by mtorun            #+#    #+#             */
/*   Updated: 2023/02/07 19:17:40 by mtorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @brief The function copies bytes from src to dest and returns dest char
 * 
 * @param dest 
 * @param src 
 * @param size 
 * @return char* 
 */

char	*ft_strncpy_gnl(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (size > i && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * @brief The function counts length of the string and returns it.
 * 
 * @param str 
 * @return size_t 
 */

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * @brief The function joins char s1 with char s2 and returns new string.
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strncpy_gnl((char *)malloc(ft_strlen_gnl(s1)),
					s1, ft_strlen_gnl(s1)));
		if (s2)
			return (ft_strncpy_gnl((char *)malloc(ft_strlen_gnl(s2)),
					s2, ft_strlen_gnl(s2)));
		return (0);
	}
	str = (char *) malloc((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

/**
 * @brief The function finds given c from the string and returns its address.
 * 
 * @param str 
 * @param c 
 * @return char* 
 */

char	*ft_strchr_gnl(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != (char) c && *str != '\0')
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

/**
 * @brief The function creates new string from start to length.
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */

char	*ft_substr_gnl(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	if (!s)
		return (0);
	s_len = ft_strlen_gnl(s);
	if (s_len <= start)
	{
		substr = (char *)malloc(sizeof(char));
		*substr = 0;
		return (substr);
	}
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	substr = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!substr)
		return (substr);
	index = 0;
	while (index < sub_len)
		substr[index++] = s[start++];
	substr[index] = '\0';
	return (substr);
}
