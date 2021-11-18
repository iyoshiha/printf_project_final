/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printAddress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 22:49:00 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"
# include "component.h"


// print number by hexadeciam base
// return the total number of printed charactors.
int		printAddress(void* ptr)
{
	int total_num_printed;

	if (ptr == 0)
		return(print0());
	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed =	_PF_LENGTH_OF_0X;
	total_num_printed += printHexBase((long long unsigned int)ptr, _PHEX_LOWERCASE);
	return (total_num_printed);
}
