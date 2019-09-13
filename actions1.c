/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 07:53:54 by smsibi            #+#    #+#             */
/*   Updated: 2019/09/09 10:16:48 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "actions.h"

void    swap_b(t_stack *stacks)
{
    int temp;

    if (stacks->b && stacks->b != stacks->b->next)
    {
        temp = stacks->b->data;
        stacks->b->data = stacks->b->next->data;
        stacks->b->next->data = temp;
        add_list(stacks, SB);
    }
}

void	push_a(t_stack *stacks)
{
	if (!(stacks->b))
		return ;
	if (stacks->a)
		add_to_top(&(stacks->a), stacks->b->data, stacks);
	else
		stacks->a = create_lst(stacks->b->data, stacks);
	remove_head(&(stacks->b));
	add_list(stacks, PA);
}

void    rotate_b(t_stack *stacks)
{
    if (stacks->b && stacks->b->next)
    {
        stacks->b = stacks->b->next;
        add_list(stacks, RB);
    }
}

void    reverse_rot_b(t_stack *stacks)
{
    if (stacks->b && stacks->b->prev)
    {
        stacks->b = stacks->b->prev;
        add_list(stacks, RRB);
    }
}
