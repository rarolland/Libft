/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:27:43 by rarollan          #+#    #+#             */
/*   Updated: 2022/05/06 09:57:12 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		n;
	size_t		dlen;
	char		*p;
	const char	*p2;

	n = size;
	p = dest;
	p2 = src;
	while (*p && n-- != 0)
		p++;
	dlen = p - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (*p2)
	{
		if (n != 1)
		{
			*p++ = *p2;
			n--;
		}
		p2++;
	}
	*p = '\0';
	return (dlen + ft_strlen(src));
}
/*int    main(void)
{
    char    dest[] = "hello";
    const char    src[] = "bonjo";
    size_t    size;

    size = 4;

    printf("%ld", ft_strlcat(dest, src, size));
    return (0);
}*/
