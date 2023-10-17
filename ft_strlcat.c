/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:14:08 by paromero          #+#    #+#             */
/*   Updated: 2023/10/17 11:44:46 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	lendst;

	lendst = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lendst)
		return (dstsize + len);
	while (src != NULL && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len + lendst);
}
/*int main ()

{
	size_t dstsize = 0;
	char dst[] = "aaa";
	const char src[] = "ASasdfadfasfd";
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
}*/
