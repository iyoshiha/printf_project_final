/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_and_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:50:26 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 22:00:40 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"

void	ConvertAndCount(t_formatData* data)
{
	if _PF_CONV_MATCHED(c)
		handle_c(data);
	if _PF_CONV_MATCHED(s)
		handle_s(data);
	if _PF_CONV_MATCHED(p)
		handle_p(data);
	if _PF_CONV_MATCHED(d)
		handle_d(data);
	if _PF_CONV_MATCHED(i)
		handle_i(data);
	if _PF_CONV_MATCHED(u)
		handle_u(data);
	if _PF_CONV_MATCHED_LOW_X
	if _PF_CONV_MATCHED_CAP_X
	if _PF_CONV_MATCHED(%)
		handle_pct(data);

}
