/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printHexBase copy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:08:08 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/16 04:18:34 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

// print number by hexadeciam base
// return the total number of printed charactors.
int		printAddress(void* ptr)
{
	int total_num_printed;

	ft_putstr_fd("0x", STDOUT_FILENO);
	total_num_printed = ft_strlen("0x");
	total_num_printed = printHexBase(ptr);
	return (total_num_printed);
}

int		printHexBase()
{

}
