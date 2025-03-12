/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:00:38 by omizin            #+#    #+#             */
/*   Updated: 2025/03/11 15:32:48 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)block;
	value = (unsigned char)c;
	while (size--)
	{
		if (*ptr == value)
			return (ptr);
		ptr++;
	}
	return ((void *)0);
}
