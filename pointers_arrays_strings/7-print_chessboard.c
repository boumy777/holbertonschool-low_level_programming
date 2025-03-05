#include <stdio.h>

/**
 * print_chessboard - Affiche un échiquier 8x8.
 * @a: Tableau 2D contenant l'échiquier.
 */
void print_chessboard(char (*a)[8])
{	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
{

/**
 * main - Fonction principale pour tester print_chessboard.
 * Return: 0 si succès.
 */
int main(void)
{	char board[8][8] = {
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
	};

	print_chessboard(board);
	return (0);
}

