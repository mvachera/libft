/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:12:22 by mvachera          #+#    #+#             */
/*   Updated: 2023/05/10 15:14:05 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void free_int(void *ptr)
{
    free(ptr);
}

int main(void)
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 42;

    printf("Before: %d\n", *(int *)(lst->content));

    ft_lstdelone(lst, free_int);

    printf("After: %p\n", lst);

    return 0;
}*/
