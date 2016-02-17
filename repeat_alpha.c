#include <unistd.h>

int		ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_count(char c)
{
	int	k;

	k = c - 'a';
	return (k);
}

void	repeat_alpha(char *s)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (ft_is_alpha(s[i]) == 0)
			write (1, s[i], 1);
		else
		{
			while (j <= ft_count(s[i]))
			{
				write (1, &s[i]), 1);
				j++;
			}
			j = 0;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
		write (1, '\n', 1);
	}
	if (ac != 2)
		ft_putchar('\n');
	return (0);
}
