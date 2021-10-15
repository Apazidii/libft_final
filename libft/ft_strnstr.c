char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	k;
	unsigned int	i;

	if (!*s2)
		return ((char *)s1);
	k = 0;
	while (s1[k] != '\0' && (unsigned int)k < n)
	{
		if (s1[k] == s2[0])
		{
			i = 1;
			while (s2[i] != '\0' && s1[k + i] == s2[i] && \
					(unsigned int)(k + i) < n)
				i++;
			if (s2[i] == '\0')
				return ((char *)&s1[k]);
		}
		k++;
	}
	return (0);
}
