/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:40 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 19:47:59 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tmp.h"

void	handle_p(t_formatData* data)
{
	void*	ptr;

	ptr = va_arg(data->ap, void*);
	_PF_LEN_PRINTED += printAddress(ptr):
	return ;
}
