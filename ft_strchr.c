/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:27:34 by omizin            #+#    #+#             */
/*   Updated: 2025/03/10 15:07:04 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == (char)c)
			return ((char *)string);
		string++;
	}
	if (c == '\0')
		return ((char *)string);
	return ((void *)0);
}
