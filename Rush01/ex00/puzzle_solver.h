/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_logic.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:02:17 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/17 01:02:30 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_SOLVER_H
#define PUZZLE_SOLVER_H

struct Puzzle {
    int size;
    int **grid;
};

struct Puzzle* create_puzzle(int size);
void destroy_puzzle(struct Puzzle *puzzle);
int solve_puzzle(struct Puzzle *puzzle);
void print_solution(struct Puzzle *puzzle);

#endif // PUZZLE_SOLVER_H
