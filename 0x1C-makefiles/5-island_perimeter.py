#!/usr/bin/python3
""" Calcuate the perimeter of a grid
"""
def island_perimeter(grid):
    """ find the perimeter of a grid """
    total_perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter = 4
                if i == 0 or i == rows - 1 or j == 0 or j == cols - 1:
                    perimeter -= 2
                else:
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                total_perimeter += perimeter

    return total_perimeter
