/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:09:00 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/16 12:22:28 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (n == 0)
			return (0);
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return ((unsigned char) *s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*int   main()
{
    char    s1[] = "Salut";
    char    s2[] = "salut";
    unsigned int    n = 3;
    printf("%d", ft_strncmp(s1, s2, n));
    return (0);
}*/
