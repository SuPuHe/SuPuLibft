/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:35:06 by omizin            #+#    #+#             */
/*   Updated: 2025/03/10 09:36:58 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *block, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)block;
	while (size--)
	{
		*ptr = 0;
		ptr++;
	}
}
