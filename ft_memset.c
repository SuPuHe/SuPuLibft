/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:38:20 by omizin            #+#    #+#             */
/*   Updated: 2025/03/07 12:16:50 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)block;
	value = (unsigned char)c;
	while (size--)
	{
		*ptr = value;
		ptr++;
	}
	return (block);
}
