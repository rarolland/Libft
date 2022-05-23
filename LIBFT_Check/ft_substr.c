/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:03:04 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/10 10:51:57 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*st;

	if (start >= ft_strlen(s))
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	if (ft_strlen(s) < (start + len))
	{
		len = ft_strlen(s) - start;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	st = str;
	while (len--)
	{
		*str++ = s[start];
		start++;
	}
	*str = '\0';
	return (st);
}

/*int main()
{
	char const s[] = "bonjour monsieur";
	unsigned int start = 5;
	size_t len = 3;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
