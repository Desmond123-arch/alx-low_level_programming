#!/usr/bin/python3
""" Calcuate the perimeter of a grid
"""
def island_perimeter(grid):
    """ Calcualtes the perimeter of a grid, each grid has 
    a size of 1
    """
    row = len(grid)
    col = len(grid[0])
    perimeter = 4
    total = 0

    for i in range(row):
        perimeter = 4
        for j in range(col):
            if grid[i][j] == 1:
                if i == 0 or i == (row - 1) or j == 0 or j == (col - 1):
                    perimeter -= 3
                else:
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                    if grid[i+1][j] == 1:
                        perimeter -= 1
                    if grid[i-1][j] == 1:
                        perimeter -= 1
        total += perimeter
    return total
