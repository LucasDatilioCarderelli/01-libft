int	ft_isalpha(int argument)
{
	if ((argument >= 'A' && argument <= 'Z') || \
		(argument >= 'a' && argument <= 'z'))
		return (1);
	return (0);
}
