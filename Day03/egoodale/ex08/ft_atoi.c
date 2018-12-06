/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:26:22 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/12 23:23:39 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int i;
	int num;

	i = 0;
	sign = 1;
	num = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i += 1;
	}
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			num = num * 10 + str[i] - '0';
			i++;
		}
		else
			return (1);
	}
	return (sign * num);
}
