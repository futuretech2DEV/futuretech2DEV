/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucianosantesso <lucianosantesso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:21:49 by nviveiro          #+#    #+#             */
/*   Updated: 2022/02/06 16:50:31 by lucianosant      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int, int, const char *);

// const char *rush00 = "oooo-|";
// const char *rush01 = "/\\\\/**|";
// const char *rush02 = "AACCBB";
// const char *rush03 = "ACACBB";
// const char *rush04 = "ACCABB";


int	main(int argc, char *argv[])
{
	// rush(5, 5, rush00);
	// rush(5, 5, rush01);
	// rush(5, 5, rush02);
	// rush(5, 5, rush03);
	// rush(5, 3, rush04);
	// rush(5, 1, rush04);
	// rush(1, 1, rush04);
	// rush(1, 5, rush04);
	// rush(4, 4, rush04);
	// rush(5, 5, rush04);


	if (argc > 1) {
		int nc;
		char *dados;
		
		nc = 0;
		dados = argv[1];
		
		while(dados[nc] != '\0')
			nc++;

		if (nc == 6)
			rush(5,5, dados);

	} 
	
	return (0);
}
