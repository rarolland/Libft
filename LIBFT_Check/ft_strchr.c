/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:07:38 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/09 15:07:43 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == 0)
		return ((char *)s);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}*/
