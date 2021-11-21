/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:01:48 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 15:36:39 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_H
# define HANDLE_H

# define "libft.h"

int		handle_pct(t_formatData* data);
int		handle_c(t_formatData* data);
int		handle_d(t_formatData* data);
int		handle_i(t_formatData* data);
int		handle_large_x(t_formatData* data);
int		handle_lower_x(t_formatData* data);
int		handle_p(t_formatData* data);
int		handle_s(t_formatData* data);
int		handle_u(t_formatData*	data);

# endif
