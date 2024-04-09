#!/usr/bin/python3

def island_perimeter(grid):
    perimeter = 0

    for i in range(0, len(grid) - 1):
        sublist = grid[i]

        for n in range(0, len(sublist) - 1):
            if sublist[n] == 1:
                if n == 0 and n != len(sublist) - 1:
                    if sublist[n + 1] == 0:
                        perimeter += 1
                if n != 0 and n == len(sublist) - 1:
                    if sublist[n - 1] == 0:
                        perimeter += 1

                if n != 0 and n != len(sublist) - 1:
                    if sublist[n + 1] == 0:
                        perimeter += 1
                    if sublist[n - 1] == 0:
                        perimeter += 1

                if i == 0:
                    downlist = grid[i + 1]
                    if downlist[n] == 0:
                        perimeter += 1
                elif i == len(grid) - 1:
                    uplist = grid[i - 1]
                    if uplist[n] == 0:
                        perimeter += 1
                else:
                    downlist = grid[i + 1]
                    uplist = grid[i - 1]

                    if downlist[n] == 0:
                        perimeter += 1
                    if uplist[n] == 0:
                        perimeter += 1
    return (perimeter)
