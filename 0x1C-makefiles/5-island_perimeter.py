#!/usr/bin/python3

'''
island_perimeter function.
'''


def island_perimeter(grid):
    '''
    Function to find the perimeter of a figure in a grid
    the 0 is an empty casille and 1 is a figure casille
    '''

    height = len(grid) - 1
    width = len(grid[0]) - 1

    perimeter = 0

    for i in range(0, height):
        for j in range(0, width):
            if grid[i][j]:
                if not grid[i - 1][j]:
                    perimeter += 1
                if not grid[i + 1][j]:
                    perimeter += 1
                if not grid[i][j - 1]:
                    perimeter += 1
                if not grid[i][j + 1]:
                    perimeter += 1
    return perimeter
