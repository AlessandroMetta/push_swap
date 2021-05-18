#include "../includes/libft.h"

int ft_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\n'
		|| c == '\f')
		return (1);
	return (0);
}
