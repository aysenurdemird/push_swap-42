/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aydemir <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:22:18 by aydemir           #+#    #+#             */
/*   Updated: 2023/01/03 20:22:20 by aydemir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	a;
	t_data	b;

	a.type = 'a';
	b.type = 'b';
	if (ac >= 2)
		reading(av, &a, &b);
	else
		return (0);
	duplicate(&a, &b);
	indexing(&a);
	check_listed(&a, &b);
	if (a.size > 5)
		sort_the_list(&a, &b);
	else
		sort_smaller_list(&a, &b);
	free(a.array);
	free(b.array);
	return (0);
}
