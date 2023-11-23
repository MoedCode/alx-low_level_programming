#!/usr/bin/python3
""" interview question"""


def island_perimeter(grid):
    """ Calculate the perimeter of the island described in the grid."""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 sides to the perimeter
                # Check if there is a land cell on the left
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Deduct 2 sides if there is a neighboring land cell on the left
                # Check if there is a land cell above
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Deduct 2 sides if there is a neighboring land cell above

    return perimeter
