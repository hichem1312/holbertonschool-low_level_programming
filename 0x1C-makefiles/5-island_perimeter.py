def side_count(grid, i, j):
    """Check for neighbours or nothing."""
    x = 4

    if j > 0 and grid[i][j - 1] == 1:
        x -= 1

    if len(grid[i]) > j + 1 and grid[i][j + 1] == 1:
        x -= 1

    if i > 0 and grid[i - 1][j] == 1:
        x -= 1

    if len(grid) > i + 1 and grid[i + 1][j] == 1:
        x -= 1

    return x


def island_perimeter(grid):
    """Get island perimmeter."""
    perimeter_length = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if (grid[i][j] == 1):
                # print(check_grid(grid, i, j))
                perimeter_length += side_count(grid, i, j)
    return perimeter_length
