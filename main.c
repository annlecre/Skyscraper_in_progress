/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annlecre <annlecre@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:47:28 by annlecre          #+#    #+#             */
/*   Updated: 2026/03/15 07:42:40 by annlecre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_clues(char *argv)
{
	int	clues[4][4];
	int	i;

	i = 0;
	while (i < 4)
	{
		clues[0][i] = argv[1][0 + i] - 48;
		clues[1][i] = argv[1][4 + i] - 48;
		clues[2][i] = argv[1][8 + i] - 48;
		clues[3][i] = argv[1][12 + i] - 48;
		i++;
	}
}

void	print_solved_grid(int *grid)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, grid[i][j] + '0', 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
	}
}


int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;
		int	j;
		int	count;

		i = 0;
		count = 0;
		while (argv[1][i])
		{
			if (argv[1][i] < 1 + 48 || argv[1][i] > 4 + 48)
				write(1, "Error\n", 6);
				return (0);
			count++;
			i++;
		}
		if (count != 16)
			write(1, "Error\n", 6);
			return (0);
		else
		{
			//start the program
			get_clues(argv[1]);
			//initialize solution grid
			i = 0;
			while (i < 4)
			{
				j = 0;
				while (j < 4)
				{
					grid[i][j] = 0;
					j++;
				}
				i++;
			}
			//solve the grid
			//print solved grid
		}
	}
	else
		write(1, "Error\n", 6);
		return (0);
}

