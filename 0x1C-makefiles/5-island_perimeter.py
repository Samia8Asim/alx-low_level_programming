#!/usr/bin/python3
"""perimeter of island module
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    """
    rows, cols = len(grid), len(grid[0])
    size = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                size += 4
                if i > 0 and grid[i - 1][j] == 1:  # Up
                    size -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:  # Down
                    size -= 1
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    size -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:  # Right
                    size -= 1
    return size
