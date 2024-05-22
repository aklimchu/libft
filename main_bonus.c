/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:10:47 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 13:37:14 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

void	free_c(void *c)
{
	free(c);
}

void	printlist(t_list *lst)
{
	while (lst)
	{
		printf("New node for ft_lstmap: %s\n", (char*)lst->content);
		lst = lst->next;
	}
}

void    iterate_c(void *c)
{
	while (*(char *)c)
	{
		*(char *)c = 'a';
		c++;
	}
}

void    *iterate_c_2(void *c)
{
	if (*(char *)c < '2')
		return((void *) 0);
	*(char *)c = *(char *)c + 5;
	return(c);
}

int	main(void)
{
	t_list	*str;
	str = ft_lstnew("1");
	printf("New node with ft_lstnew: %s\n", (char *)str->content);
	free(str);

	t_list	*lst = NULL;
	t_list	*new = ft_lstnew("HEY");
	ft_lstadd_front(&lst, new);
	printf("Test for ft_lstadd_front, %s\n", (char *)lst->content);
	
	t_list	*lst1;
	t_list	*one1;
	t_list	*two1;
	one1 = malloc(sizeof(t_list));
	two1 = malloc(sizeof(t_list));
	one1->content = "1";
	two1->content = "2";
	one1->next = two1;
	two1->next = NULL;
	lst1 = one1;
	printf("Test for ft_lstsize: %d\n", ft_lstsize(lst1));
	free(one1);
	free(two1);

	t_list  *lst2;
	t_list  *one2;
	t_list  *two2;
	t_list	*str2;

	one2 = (t_list *)malloc(sizeof(t_list));
	two2 = (t_list *)malloc(sizeof(t_list));
	one2->content = "1";
	two2->content = "2";
	one2->next = two2;
	two2->next = NULL;
	lst2 = one2;
	str2 = ft_lstlast(lst2);
	printf("Test for ft_lstlast: %s\n", (char*)str2->content);
	free(one2);
	free(two2);

	t_list	*new3 = ft_lstnew("3");
	t_list  *lst3;
	t_list  *one3;
	t_list  *two3;
	one3 = malloc(sizeof(t_list));
	two3 = malloc(sizeof(t_list));
	one3->content = "1";
	two3->content = "2";
	one3->next = two3;
	two3->next = NULL;
	lst3 = one3;
	ft_lstadd_back(&lst3, new3);
	while (lst3->next)
	{
		printf("Test for ft_lstadd_back: %s\n", (char*)lst3->content);
		lst3 = lst3->next;
	}
	printf("Test for ft_lstadd_back: %s\n", (char*)lst3->content);
	free(one3);
	free(two3);
	free(new3);	
	
	t_list  *lst6;
	t_list  *one6;
	t_list  *two6;
	t_list	*four6;
	t_list	*three6;
	t_list	*newlst6;
	t_list	*temp6;

	one6 = malloc(sizeof(t_list));
	two6 = malloc(sizeof(t_list));
	three6 = malloc(sizeof(t_list));
	four6 = malloc(sizeof(t_list));
	one6->content = ft_strdup("2");
	two6->content = ft_strdup("1");
	three6->content = ft_strdup("3");
	four6->content = ft_strdup("4");
	one6->next = two6;
	two6->next = three6;
	three6->next = four6;
	four6->next = NULL;
	lst6 = one6;
	newlst6 = ft_lstmap(lst6, &iterate_c_2, &free_c);
	if (newlst6 == NULL)
		return (1);
	printlist(newlst6);
	free(one6->content);
	free(two6->content);
	free(three6->content);
	free(four6->content);
	free(one6);
	free(two6);
	free(three6);
	free(four6);
	while (newlst6)
	{
		temp6 = newlst6;
		newlst6 = newlst6->next;
		free(temp6);
	}	

	t_list  *lst7;
	t_list  *one7;
	t_list  *two7;

	one7 = malloc(sizeof(t_list));
	two7 = malloc(sizeof(t_list));
	one7->content = ft_strdup("1");
	two7->content = ft_strdup("2");
	one7->next = two7;
	two7->next = NULL;
	lst7 = one7;
	ft_lstiter(lst7, iterate_c);
	while (lst7)
	{
		printf("New node for ft_lstiter: %s\n", (char*)lst7->content);
		lst7 = lst7->next;
	}
	free(one7);
	free(two7);

	t_list	*lst8;
	t_list	*one8;
	t_list	*two8;

	one8 = malloc(sizeof(t_list));
	two8 = malloc(sizeof(t_list));
	one8->content = "1";
	two8->content = "2";
	one8->next = two8;
	two8->next = NULL;
	lst8 = one8;
	printf("Test result for ft_lstsize: %d\n", ft_lstsize(lst8));
	free(one8);
	free(two8);

	return (0);
}
