/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:40 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/25 03:45:36 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printHexBase.h>
#include <ft_printf.h>

int	handle_p(t_formatData	*data)
{
	void	*ptr;
	int		printed_num;

	ptr = va_arg(data->ap, void *);
	printed_num = printAddress(ptr);
	return (printed_num);
}
