/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helperfunction.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:26:13 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/25 13:14:23 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_COLS 19
#define MAX_ROWS 9
#ifndef HELPERFUNCTION_H
# define HELPERFUNCTION_H

void	print_map_charray(char premap[MAX_ROWS][MAX_COLS]);
void	print_map_intarray(int **intmap);
int		isobstacle(int *crds, char premap[MAX_ROWS][MAX_COLS],
			char obstaclefield);
int		checkleft(int *crds, int **intmap);
int		checkup(int *crds, int **intmap);
int		checkdiag(int *crds, int **intmap);

#endif
