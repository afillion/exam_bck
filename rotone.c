#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] == 'z')
			{
				ft_putchar('a');
				i++;
			}
			if (str[i] == 'Z')
			{
				ft_putchar('A');
				i++;
			}
			ft_putchar(str[i] + 1);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (ac == 2)
	{
		ft_rotone(av[1]);
	}
	return (0);
}
