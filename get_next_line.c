/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:52:08 by ddang             #+#    #+#             */
/*   Updated: 2020/03/09 21:35:44 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*str[fd];
	int			bytes;


	if (fd < 0 || !line || read(fd, str, 0) < 0)
		return (-1);
	if (!(bytes = (char *)malloc(sizeif(char) * BUFF_SIZE + 1)))
	{
		free(bytes);
		return (-1);
	}
	
}
