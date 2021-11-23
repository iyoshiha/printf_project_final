/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printAddress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
<<<<<<< HEAD:component/printAddress.c
/*   Updated: 2021/11/21 13:53:57 by iyoshiha         ###   ########.fr       */
=======
/*   Updated: 2021/11/21 14:15:35 by iyoshiha         ###   ########.fr       */
>>>>>>> eb64d9dd88a77f782385d5b15288575f2a91f92e:hex_component/printAddress.c
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"
# include "../includes/printHexBase.h"


// print number by hexadeciam base
// return the total number of printed charactors.
int		printAddress(void* ptr)
{
	int total_num_printed;

	if (ptr == 0)
		return(print0());
	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed =	PHEX_LEN_OF_0X;
	total_num_printed += printHexBase((long long unsigned int)ptr, PHEX_LOWERCASE);
	return (total_num_printed);
}

/*
	return: the total number of printed charactors.
	printout pointer type value assigned as argument.
*/
