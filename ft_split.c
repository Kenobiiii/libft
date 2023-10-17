int	count_substr(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 1;
	if ( s == c || s == '\0')
		count--;
	while(s[i] != '\0')
	{
		if (s[i] == c || s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int allocate_substr(char **array, char const *s, char c)
{
    size_t i;
    size_t j;
    size_t start;
    
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while ( s[i] == c && s[i] != '\0')
            i++;
        start = i;
        while (s[i] != c || s[i] != '\0')
            i++;
    }
    if (i > start)
    {
            array[j] = ft_substr(s, start, i - start);
            if (array[j] == NULL)
                return (-1);
            j++;
    }
    array[j] == NULL
    return (0);
}
void free_mem(char **array)
{
    size_t i;
    
    i = 0;
    if (array == NULL)
        return
    while (array[i] != NULL)
    {
        free(array[i]);
        i++;
    }
    free array;
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t substr;

	if (!s)
		return (NULL);
	substr = count_substr(s, c);
	array = (char **)ft_calloc((substr + 1), sizeof(char *));
	if (!array)
		return (NULL);
	if (allocate_substr(array, s, c) == -1)
	{
		free_mem(array);
 		return (NULL);
	}
	return (array);
}
