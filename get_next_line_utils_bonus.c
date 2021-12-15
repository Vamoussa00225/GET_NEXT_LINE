/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkanate <vkanate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:21:06 by vkanate           #+#    #+#             */
/*   Updated: 2021/12/09 15:21:08 by vkanate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return (&str[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*tab;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = (char *)malloc(sizeof(char) * (len));
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len])
		tab[i++] = s2[len++];
	tab[i] = '\0';
	return (tab);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	j = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
