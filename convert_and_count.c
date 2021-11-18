/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_and_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:50:26 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/19 00:12:56 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"
# include "handle/handle.h"
# include "component/component.h"

int		convertAndCount(t_formatData* data)
{
	int ret;

	if _PF_CONV_MATCHED('c')
		ret = handle_c(data);
	if _PF_CONV_MATCHED('s')
		ret = handle_s(data);
	if _PF_CONV_MATCHED('p')
		ret = handle_p(data);
	if _PF_CONV_MATCHED('d')
		ret = handle_d(data);
	if _PF_CONV_MATCHED('i')
		ret = handle_i(data);
	if _PF_CONV_MATCHED('u');
		ret = handle_u(data);
	if _PF_CONV_MATCHED_LOW_X
	if _PF_CONV_MATCHED_CAP_X
	if _PF_CONV_MATCHED('%')
		ret = handle_pct(data);
	return (ret);
}
