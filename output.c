/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:22:12 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 23:58:49 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

void	outputAndCount(t_formatData*	data)
{
	_PF_INDEX = 0;
	while (_PF_NOTEOS((_PF_FORMAT[_PF_INDEX])))
	{
		if (_PF_FORMAT[_PF_INDEX] == '%')
		{
			_NEXT _PF_INDEX++;
			_PF_LEN_PRINTED += convertAndCount(data);
		}
		else
		{
			ft_putchar_fd(_PF_FORMAT[_PF_INDEX], STDOUT_FILENO);
			_ADD _PF_LEN_PRINTED++;
		}
		_NEXT _PF_INDEX++;
	}
}
