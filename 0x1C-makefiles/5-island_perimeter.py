#!/usr/bin/python3
"""
Calculates the perimeter of the island described in a grid
"""


def island_perimeter(grid):
    """ find the perimeter of a grid """
    squares = 0

    for i in grid:
        for j in i:
            if j == 1:
                squares += 1
    return (squares * 2) + 2
