/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:15:09 by lramela           #+#    #+#             */
/*   Updated: 2019/09/09 16:06:51 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_list
{
	int 			data;
	struct s_list	*next;
	struct s_list   *prev;
}					t_list;

typedef struct s_action
{
	int             move;
	struct s_action *next;
	struct s_action *prev;
} 					t_action;

typedef struct s_line
{
	int      nb;
	char     *s;
	struct s_line *next;
}              s_line;
