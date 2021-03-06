/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_numstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satkins <satkins@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 10:09:36 by satkins           #+#    #+#             */
/*   Updated: 2017/12/15 10:10:01 by satkins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_numstr(char *line)
{
	int	i;

	i = -1;
	while (line[++i])
		if (line[i] < '0' || line[i] > '9')
			return (0);
	return (1);
}
