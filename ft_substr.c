/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paromero <paromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:59:32 by paromero          #+#    #+#             */
/*   Updated: 2023/10/26 11:46:06 by paromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(len + 1);
	if (!tmp)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (i < len)
	{
		tmp[i] = s[i + start];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
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
