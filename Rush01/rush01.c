/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:09:14 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/17 14:55:04 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int SIZE;
int **grid;

// Function to check if the given arrangement is valid
int is_valid(int row, int col, int num) 
{
    // Check row and column visibility
    int	x;

		x = 0;
		while (x < SIZE)
    {
        if (grid[row][x] == num || grid[x][col] == num) 
            return 0;
			x++;
    }
    return 1;
}

// Function to solve the puzzle using backtracking
int solve_puzzle(int row, int col) 
{
		int	num;

    if (row == SIZE)
        return 1; // All rows filled

    if (col == SIZE)
        return solve_puzzle(row + 1, 0); // Move to the next row
		num = 1;
		while (num <= SIZE)
    {
        if (is_valid(row, col, num))
				{
            grid[row][col] = num;
            if (solve_puzzle(row, col + 1))
                return 1; // Move to the next column
            grid[row][col] = 0; // Backtrack
        }
			num++;
    }

    return 0; // No valid placement found
}

int main(int argc, char *argv[]) {
		int	y;
		int	x;
		int	m;
		int	j;
    if (argc != 2) {
        printf("Usage: %s <grid_size>\n", argv[0]);
        return 1;
    }

    SIZE = atoi(argv[1]);

    if (SIZE < 1 || SIZE > 9)
		{
        printf("Grid size must be between 1 and 9.\n");
        return 1;
    }

    // Allocate memory for the grid
    grid = (int **)malloc(SIZE * sizeof(int *));
		m = 0;
		while (m < SIZE)
		{
        grid[m] = (int *)malloc(SIZE * sizeof(int));
				m++;
		}

    if (solve_puzzle(0, 0))
		{
        // Print the solved puzzle
        x = 0;
				while (x < SIZE)
				{
				  y = 0;
					while (y < SIZE)
					{
            printf("%d ", grid[x][y]);
						y++;
          }
          printf("\n");
					x++;
       }
    } else {
        printf("No solution found.\n");
    }

    // Free allocated memory
    j = 0;
		while (j < SIZE)
		{
			free(grid[j]);
			j++;
    }
    free(grid);

    return 0;
}
