/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albegar2 <albegar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:37:02 by albegar2          #+#    #+#             */
/*   Updated: 2025/04/21 21:23:17 by albegar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	size_t		i;
	size_t		f;

	i = 0;
	f = 0;
	if (!s1 && !s2)
		return (NULL);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	while (i < (ft_strlen(s1)))
	{
		result[i] = s1[i];
		i++;
	}
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		result[i] = s2[f];
		f++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(void)
{
	char *string1 = "Hello ";
	char *string2 = "";
	char *result = ft_strjoin(string1, string2);
	int i = 0;
	
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
	free(result);
	return (0);
}
*/
