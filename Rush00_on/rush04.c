/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucianosantesso <lucianosantesso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:28:35 by nviveiro          #+#    #+#             */
/*   Updated: 2022/02/06 16:58:58 by lucianosant      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y, const char *coords)
{
	int	row;
	int	column;

	if (x < 1 || y < 1)
		return ;
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if(column == 1 && row == 1)
				ft_putchar(coords[0]);
			else if (column == x && row == 1)
				ft_putchar(coords[1]);
			else if (row == y && column == 1)
				ft_putchar(coords[2]);
			else if (column == x && row == y)
				ft_putchar(coords[3]);
			else if (row == 1 || row == y)
				ft_putchar(coords[4]);
			else if (column == 1 || column == x)
				ft_putchar(coords[5]);				
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
