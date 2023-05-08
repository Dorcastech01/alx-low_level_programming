#include "main.h"
/**
 * print_chessboard - main function
 * @a: variable
 * Description: function that prints the chessboard
 * Return: result
 */
void print_chessboard(char (*a)[8])
{
	int playerone, playertwo;

	for (playerone = 0; playerone < 8; playerone++)
	{
		for (playertwo = 0; playertwo < 8; playertwo++)
		{
			_putchar(*(*(playerone + a) + playertwo));
			_putchar(' ');
		}
		_putchar('\n');
	}
}
