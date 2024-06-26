/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:49:26 by julmuntz          #+#    #+#             */
/*   Updated: 2022/09/29 16:43:23 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	struct s_stack	*a;
	struct s_stack	*b;
	int				pos;
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	int				pos;
	int				size;
	int				value;
	int				index;
	int				c1;
	int				c2;
	int				quarter;
	int				max_pos;
	int				r_needed;
	int				rr_needed;
	int				count_chunk1;
	int				count_chunk2;
}	t_data;

////////////////////////////////////////////////////////////////
/////////////  D  A  T  A  /////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
t_stack		*get_values(int size, char **arv);
void		get_index(t_stack **ptr, int size);
int			get_max_index(t_stack **ptr);
void		get_pos(t_stack **ptr);

////////////////////////////////////////////////////////////////
/////////////  S O R T I N G  //////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int			sorted(t_stack **ptr);
void		sort_2(t_stack **a);
void		sort_3(t_stack **a);
void		sort_4(t_stack **a, t_stack **b);
void		sort_5(t_stack **a, t_stack **b);
int			ra_or_rra(t_data *data, t_stack **a);
int			ra_or_rra2(t_data *data, t_stack **a);
int			rb_or_rrb(t_data *data, t_stack **b);
void		sort_beyond(t_stack **a, t_stack **b);

////////////////////////////////////////////////////////////////
/////////////  O P E R A T I O N S  ////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);

////////////////////////////////////////////////////////////////
/////////////  S T A C K   F U N C T I O N S  //////////////////////////
////////////////////////////////////////////////////////////////////////////////
void		stackadd_back(t_stack **ptr, t_stack *new);
void		stackadd_front(t_stack **ptr, t_stack *new);
void		stackclear(t_stack **ptr);
void		stackdisplay(t_stack *a, t_stack *b);
t_stack		*stacklast(t_stack *node);
t_stack		*stacknew(int value);
int			stackpop(t_stack **ptr);
void		stackpop_last(t_stack **ptr);
int			stacksize(t_stack *node);

#endif