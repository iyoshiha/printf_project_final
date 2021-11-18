/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:40 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/15 21:20:16 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

void	handle_p(t_formatData data)
{
	void*	ptr;

	ptr = va_arg(data->ap, void*);
	LEN_PRINTED += printAddress(ptr):
	return ;
}
