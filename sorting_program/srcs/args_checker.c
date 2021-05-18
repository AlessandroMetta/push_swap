#include "../includes/lib.h"

void args_checker(int argc, char **argv)
{
	int i;
	int j;

	i = -1;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][++i])
			if (argv[1][i] != ' ' && argv[1][i] != '-')
				if (!ft_isdigit(argv[1][i]) && argv[1][i] != '+')
					error_message();
	}
	else
		while (argv[++j])
		{
			i = -1;
			while (argv[j][++i])
				if (argv[j][i] != ' ' && argv[j][i] != '-')
					if (!ft_isdigit(argv[j][i]) && argv[j][i] != '+')
						error_message();
		}
}
