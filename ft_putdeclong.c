/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdeclong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:49:42 by dbredykh          #+#    #+#             */
/*   Updated: 2023/05/11 20:00:17 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putdeclong(unsigned int n)
{
	char	*new_str;
	size_t	len;

	new_str = ft_itoalong((long)n);
	len = ft_putstr(new_str);
	free(new_str);
	return (len);
}
