/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_hang.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 22:45:06 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/27 15:09:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	cat_hang(int *index)
{
	char	buf[BUF_SIZE + 1];

	while (read(0, buf, 1) != 0)
		write(1, buf, 1);
	
	*index += 1;
	return ;
}