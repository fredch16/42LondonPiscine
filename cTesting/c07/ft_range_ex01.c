/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:12 by fcharbon          #+#    #+#             */
/*   Updated: 2023/10/17 18:32:18 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	count;

	count = max - min;
	if (min >= max)
		return(0);
	result = (int *)malloc(4 * (max - min));

	if (result == 0)
		return(0);

	i = 0;
	while (i < count)
	{
		result[i] = min + i;
		i++;
	}

	return result;
}

int main() {
    int min = 5;
    int max = 10;

    int *arr = ft_range(min, max);

    if (arr != NULL) {
        printf("Array: ");
        for (int i = 0; i < max - min; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr); // Don't forget to free the allocated memory
    } else {
        printf("Null pointer returned. Min must be less than max.\n");
    }

    return 0;
}
