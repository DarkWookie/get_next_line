/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 17:53:55 by rgroscla          #+#    #+#             */
/*   Updated: 2017/04/06 17:53:57 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

EOF rules :
1) There is no EOF character, unless you open files in text mode on Windows, or implement one yourself.
2) The EOF symbol in C++ and C is not an end-of-file character, it is special return value of certain library functions.
3) Don’t loop on the eof() or feof() functions.

- lire depuis
	fd


- atteindre EOF ()



differencier fin de ligne et fin de fichier (si fin non atteinte et ligne lue return 1 si le fichier est termine return 0)
*/
#include "get_next_line.h"

size_t	is_new_line(const int fd, char *buf, size_t l)
{
	buf = read(fd, *buf, BUFF_SIZE);
}

int		get_next_line(const int fd, char **line)
{
	size_t	nblines;
	char	*buf;

	if (!((buf = (char *)malloc(BUFF_SIZE)) || fd))
		return (-1);
	while (is_new_line(fd, *line, BUFF_SIZE))
		nblines = l++;
	while ()
	


	return (1); // une ligne a été lue
	if (!fd)
		return (0); //la lecture est terminee
	return (-1);
}
