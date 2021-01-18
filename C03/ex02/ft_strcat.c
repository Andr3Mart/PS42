/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:41:55 by anmartin          #+#    #+#             */
/*   Updated: 2021/01/18 14:19:19 by anmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i_dest;

	i = 0;
	i_dest = 0;
	while (dest[i_dest])
		i_dest++;
	while (src[i])
	{
		dest[i_dest] = src[i];
		i_dest++;
		i++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
