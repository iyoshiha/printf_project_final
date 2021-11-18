/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:10:13 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 19:47:56 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

void	handle_c(t_formatData* data)
{
	char chr;

	chr = va_arg(data->ap, char);
	ft_putchar_fd(chr, STDOUT_FILENO);
	_PF_ADD _PF_LEN_PRINTED++;
	return ;
}
