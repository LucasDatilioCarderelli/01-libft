#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	if (*s == '\0')
		return (0);
	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (*s != '\0')
	{
		*dup = *s;
		dup++;
		s++;
	}
	*dup = '\0';
	return ((char *)dup);
}
