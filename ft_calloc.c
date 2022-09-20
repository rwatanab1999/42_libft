/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 05:33:45 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 18:35:24 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if ((count > SIZE_MAX / size && size > 1) || \
								(count > 0 && size > SIZE_MAX / count))
	{
		return (NULL);
	}
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, (count * size));
	return (p);
}

/*
int	main(void)
{
	int	size ;
	int	i;
	int	*array1;
	int	*array2;
	void *array3;
	void *array4;
	int cmp;

	printf("データ件数を入力してください。\n");
	scanf("%d", &size);
	array1 = (int*)calloc(size, 4);
	if (array1 != NULL)
	{
		printf(">calloc    : ");
//		for(i = 0 ; i < size ; i++)
//			array1[i] = i;
		for(i = 0 ; i < size ; i++)
			printf("%d ", array1[i]);
		printf("\n");
		free(array1);
	}
	array2 = (int*)ft_calloc(size, 4);
	if (array2 != NULL)
	{
		printf(">ft_calloc : ");
//		for(i = 0 ; i < size ; i++)
//			array2[i] = i;
		for(i = 0 ; i < size ; i++)
			printf("%d ", array2[i]);
		printf("\n");
		free(array2);
	}
	array3 = calloc(8539, sizeof(int));
	array4 = ft_calloc(8539, sizeof(int));
	cmp = memcmp(array3, array4, 8539 * sizeof(int));
	printf("%d\n", cmp);
	return (0);
}
*/
