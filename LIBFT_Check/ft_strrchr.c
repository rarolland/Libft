/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:55:44 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/04 16:08:40 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*temp;

	ch = c;
	temp = NULL;
	while (*s)
	{
		if (*s == ch)
			temp = s;
		s++;
	}
	if (ch == 0)
		return ((char *)s);
	return ((char *)temp);
}
/*
#include <stdio.h>
int main() 
{
	const char str[150] = "je suis ton mere suis ton pere";
	int c = 't';
	printf("%s\n", ft_strrchr(str, c));
	return(0);
}*/
