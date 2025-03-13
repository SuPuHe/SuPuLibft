/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:11:08 by omizin            #+#    #+#             */
/*   Updated: 2025/03/13 16:40:58 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int c)
{
	char	*found;

	found = (void *)0;
	while (*string)
	{
		if (*string == (char)c)
			found = (char *)string;
		string++;
	}
	if (c == '\0')
		return ((char *)string);
	return (found);
}
