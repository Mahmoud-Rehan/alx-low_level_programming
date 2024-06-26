#!/usr/bin/python3
""" Get the Number of perimeter Function Module """


def island_perimeter(grid):
    """ island_perimeter function module """
    perimeter = 0

    for i in range(len(grid)):
        sublist = grid[i]
        for n in range(len(sublist)):
            if sublist[n] == 1:
                if i == 0 or grid[i - 1][n] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][n] == 0:
                    perimeter += 1
                if n == 0 or grid[i][n - 1] == 0:
                    perimeter += 1
                if n == len(sublist) - 1 or grid[i][n + 1] == 0:
                    perimeter += 1
    return (perimeter)
