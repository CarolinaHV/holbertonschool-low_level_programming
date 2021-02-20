#!/usr/bin/python3
"""
This function returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    """
    if len(grid) < 1:
        return 0
    perimeter = 0
    ext_y = len(grid) - 1
    ext_x = len(grid[0]) - 1
    for x in range(ext_x):
        for y in range(ext_y):
            if grid[x][y] == 1:
                """ UP """
                if y == 0:
                    perimeter += 1
                elif grid[x][y - 1] == 0:
                    perimeter += 1
                """ DOWN """
                if y == ext_y:
                    perimeter += 1
                elif grid[x][y + 1] == 0:
                    perimeter += 1
                """ RIGHT """
                if x == 0:
                    perimeter += 1
                elif grid[x - 1][y] == 0:
                    perimeter += 1
                """ LEFT """
                if x == ext_x:
                    perimeter += 1
                elif grid[x + 1][y] == 0:
                    perimeter += 1
    return perimeter
