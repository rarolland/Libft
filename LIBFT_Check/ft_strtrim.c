/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:04:19 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/10 11:57:17 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*st;
	size_t	i;
	size_t	l;
	size_t	j;

	i = 0;
	while (check_char(set, s1[i]))
		i++;
	l = ft_strlen(s1);
	if (l == i)
	{
		l = 0;
		i = 0;
	}
	while (check_char(set, s1[l - 1]))
		l--;
	str = malloc(sizeof(char) * (l - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (i < l)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (st = str);
}
/*int main(void)
{
    printf("%s", ft_strtrim("............ok . ?........", ". "));
    return (0);
}*/
