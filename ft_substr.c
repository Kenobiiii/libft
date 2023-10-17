/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:59:32 by paromero          #+#    #+#             */
/*   Updated: 2023/10/16 11:06:56 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(len + 1);
	if (!s || (!str))
		return (NULL);
	if (start > strlen(s))
	{
		return (strdup(""));
	}
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main() {
    const char *original = "Buenos dias!";
    char *copia = ft_substr(original, 2, 10);
    if (copia != NULL) {
        printf("Copia: %s\n", copia);
        free(copia);
    } else {
        printf("Error al duplicar la cadena.\n");
    }
    return 0;
}*/
