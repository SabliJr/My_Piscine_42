/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_logic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:57:40 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/17 01:01:27 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle_solver.h"
#include <stdio.h>
#include <stdlib.h>

// Helper function to check if the given arrangement is valid
static int is_valid(struct Puzzle *puzzle, int row, int col, int num) {
    // Check row and column visibility
    for (int i = 0; i < puzzle->size; i++) {
        if (puzzle->grid[row][i] == num || puzzle->grid[i][col] == num) {
            return 0;
        }
    }
    return 1;
}

// Helper function to solve the puzzle using backtracking
static int solve(struct Puzzle *puzzle, int row, int col) {
    if (row == puzzle->size) {
        return 1; // All rows filled
    }

    if (col == puzzle->size) {
        return solve(puzzle, row + 1, 0); // Move to the next row
    }

    for (int num = 1; num <= puzzle->size; num++) {
        if (is_valid(puzzle, row, col, num)) {
            puzzle->grid[row][col] = num;
            if (solve(puzzle, row, col + 1)) {
                return 1; // Move to the next column
            }
            puzzle->grid[row][col] = 0; // Backtrack
        }
    }

    return 0; // No valid placement found
}

struct Puzzle* create_puzzle(int size) {
    struct Puzzle *puzzle = malloc(sizeof(struct Puzzle));
    puzzle->size = size;
    puzzle->grid = malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        puzzle->grid[i] = malloc(size * sizeof(int));
    }
    return puzzle;
}

void destroy_puzzle(struct Puzzle *puzzle) {
    for (int i = 0; i < puzzle->size; i++) {
        free(puzzle->grid[i]);
    }
    free(puzzle->grid);
    free(puzzle);
}

int solve_puzzle(struct Puzzle *puzzle) {
    // Initialize the grid with zeros
    for (int i = 0; i < puzzle->size; i++) {
        for (int j = 0; j < puzzle->size; j++) {
            puzzle->grid[i][j] = 0;
        }
    }

    return solve(puzzle, 0, 0); // Start solving from the top-left corner
}

void print_solution(struct Puzzle *puzzle) {
    // Print the solved puzzle
    for (int i = 0; i < puzzle->size; i++) {
        for (int j = 0; j < puzzle->size; j++) {
            printf("%d ", puzzle->grid[i][j]);
        }
        printf("\n");
    }
}
