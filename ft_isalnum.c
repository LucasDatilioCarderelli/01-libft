int	ft_isalnum(int argument)
{
	if ((argument >= '0' && argument <= '9') \
	|| (argument >= 'A' && argument <= 'Z') \
	|| (argument >= 'a' && argument <= 'Z'))
		return (1);
	return (0);
}
