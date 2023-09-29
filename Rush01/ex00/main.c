/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:56:43 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/17 01:05:07 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle_solver.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <grid_size>\n", argv[0]);
        return 1;
    }

    int size = atoi(argv[1]);

    if (size != 4) {
        printf("Grid size must be 4.\n");
        return 1;
    }

    struct Puzzle *puzzle = create_puzzle(size);

    if (solve_puzzle(puzzle)) {
        print_solution(puzzle);
    } else {
        printf("No solution found.\n");
    }

    destroy_puzzle(puzzle);

    return 0;
}
