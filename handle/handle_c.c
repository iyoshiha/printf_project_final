/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:10:13 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/19 22:37:29 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
#include "../tmp.h"

int		handle_c(t_formatData* data)
{
	unsigned char chr;
	int		printed_num;

	chr = va_arg(data->ap, int);
	ft_putchar_fd(chr, STDOUT_FILENO);
	return (printed_num = 1);
}
