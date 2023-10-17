/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:41:58 by paromero          #+#    #+#             */
/*   Updated: 2023/10/16 11:40:35 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*int main ()
{
 const char *largestring = "buenos dias";
           int c = 'a';
           char *ptr;
           ptr = ft_strchr(largestring, c);
   printf("%s\n", ptr);
   return(0);
}*/
