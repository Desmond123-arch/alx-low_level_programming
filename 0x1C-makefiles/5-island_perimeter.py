#!/usr/bin/python3
""" Calcuate the perimeter of a grid
"""


def check_surround(i, j, grid):
    w = 0
    r = len(grid)
    c = len(grid[0])
    if j == 0 or grid[i][j-1] == 0:
        w += 1
    if i == 0 or grid[i-1][j] == 0:
        w += 1
    if i == r-1 or grid[i+1][j] == 0:
        w += 1
    if j == c-1 or grid[i][j+1] == 0:
        w += 1
    return w


def island_perimeter(grid):
    """ find the perimeter of a grid """
    total = 0
    row = len(grid)
    col = len(grid[0])
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                total += check_surround(i, j, grid)
    return total
