/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 13:19:10 by llenotre          #+#    #+#             */
/*   Updated: 2018/08/12 14:31:03 by llenotre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

int	used_in_row(char **grid, unsigned int row, char n);
int	used_in_column(char **grid, unsigned int column, char n);
int	used_in_box(char **grid, unsigned int row, unsigned int column, char n);
int	is_safe(char **grid, unsigned int x, unsigned int y, char n);
int	find_empty(char **grid, unsigned int *x, unsigned int *y);
int	solve(char **grid);

#endif
