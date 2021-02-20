#!/usr/bin/python3

'''
island_perimeter function.
'''


def island_perimeter(grid):
    '''
    Function to find the perimeter of a figure in a grid
    the 0 is an empty casille and 1 is a figure casille
    '''

    height = len(grid)
    width = len(grid[0])

    perimeter = 0

    for i in range(0, height):
        for j in range(0, width):
            if grid[i][j]:
                if i - 1 >= 0:
                    if not grid[i - 1][j]:
                        perimeter += 1
                else:
                    perimeter += 1
                if i + 1 < len(grid):
                    if not grid[i + 1][j]:
                        perimeter += 1
                else:
                    perimeter += 1
                if j - 1 >= 0:
                    if not grid[i][j - 1]:
                        perimeter += 1
                else:
                    perimeter += 1
                if j + 1 < len(grid[0]):
                    if not grid[i][j + 1]:
                        perimeter += 1
                else:
                    perimeter += 1

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 1, 1, 0, 0]
    ]
    print(island_perimeter(grid))