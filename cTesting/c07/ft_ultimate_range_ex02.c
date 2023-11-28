/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_ex02.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:12 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/19 12:55:35 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		*range = NULL;
	size = max - min;
	arr = (int *)malloc(size * 4);

	if (arr == NULL)
		return (-1);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}

int main() {
    int *range;
    int min = 5;
    int max = 4;
    int size = ft_ultimate_range(&range, min, max);

    if (size == -1) {
        printf("Memory allocation failed.\n");
    } else if (size == 0) {
        printf("min is greater than or equal to max. Range is NULL.\n");
    } else 	
    {
        printf("Range: ");
            printf("%d ", size);
    }    
        printf("\n");
        free(range); // Don't forget to free the allocated memory when done.

    return 0;
    }
