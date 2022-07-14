#!/usr/bin/python3


"""Island perimeter"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""
    row_num = len(grid)
    if row_num == 0 or len(grid[0]) == 0:
        return 0
    islands, overlaps = 0, 0
    col_num = len(grid[0])
    for i in range(row_num):
        for j in range(col_num):
            if (grid[i][j] == 1):
                islands += 1
                if (i < row_num - 1 and grid[i + 1][j] == 1):
                    overlaps += 1
                if (j < col_num - 1 and grid[i][j + 1] == 1):
                    overlaps += 1
    return islands * 4 - overlaps * 2