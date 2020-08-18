#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

/**
 * sandpiles_sum - Function that computes the sum of two sandpiles.
 * @grid1: Sandpile 1
 * @grid2: Sandpile 2
 *
 * Return: nothing.
*/

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			redistribute(grid1);
		}
	}
}

/**
 * print_grid - Function that computes the sum of two sandpiles.
 * @grid: Sandpile
 *
 * Return: nothing.
*/
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * redistribute - Function that distributes the sand grains
 * @grid1: Sandpile
 *
 * Return: nothing.
*/
void redistribute(int grid1[3][3])
{
	int x, y, num;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			num = grid1[x][y];
			if (num >= 4)
			{
				printf("=\n");
				print_grid(grid1);
				grid1[x][y] -= 4;
				if (x + 1 < 3)
					grid1[x + 1][y]++;
				if (x - 1 >= 0)
					grid1[x - 1][y]++;
				if (y + 1 < 3)
					grid1[x][y + 1]++;
				if (y - 1 >= 0)
					grid1[x][y - 1]++;
			}
		}
	}
}
