/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filereading.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:08:56 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/21 16:12:56 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	int fd = open("numbers.dict", O_RDONLY, 0);
	close(fd);
	printf("fd = %d\n", fd);
}
