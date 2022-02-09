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

#include <stdio.h>

void	rush(int, int, const char *);
int 	littleAtoi(char* str)
{
    int resultado = 0;
    int i = 0;
    while(str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9') {
                resultado = resultado * 10 + str[i] - '0';
                i++;
}
}

    return resultado;
}

const int NEX = 5;
const char rushes[NEX][7] = {"oooo-|", "/\\\\/**|", "AACCBB", "ACACBB", "ACCABB"};

int	main(int argc, char *argv[])
{

	if (argc == 4) {
		int nc;
		char *dados, *cx, *cy;
		
		nc = 0;
		cx = argv[1];
		cy = argv[2];
		dados = argv[3];
	
		while(dados[nc] != '\0')
			nc++;

		if (nc == 1)
			rush(littleAtoi(cx), littleAtoi(cy), rushes[littleAtoi(dados)]);

		if (nc == 6)
			rush(littleAtoi(cx), littleAtoi(cy), dados);
	} 
	
	return (0);
}
