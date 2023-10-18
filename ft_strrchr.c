/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:52:09 by paromero          #+#    #+#             */
/*   Updated: 2023/10/18 12:13:41 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	tmp;

	tmp = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (c == s[tmp])
		{
			return ((char *)s + tmp);
		}
		i++;
		tmp--;
	}
	return (NULL);
}
/*int main ()
{
 const char *largestring = "buenos dias";
           int c = 'a';
    printf("%s\n", ft_strrchr(largestring, c));
   printf("%s\n", strrchr(largestring, c));
   return(0);
}*/
