/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:35:02 by omizin            #+#    #+#             */
/*   Updated: 2025/03/11 17:44:29 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != '\0')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return ((void *)0);
	i = 0;
	while (s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
