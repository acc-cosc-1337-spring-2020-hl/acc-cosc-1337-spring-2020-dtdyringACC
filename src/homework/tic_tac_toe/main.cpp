#include "tic_tac_toe.h"

int main()
{
	try
	{
		string cont;
		cout << "Do you want to play TicTacToe (Y/N)?\n";
		cin >> cont;
		TicTacToe game;
		string initPlayer;
		cout << "Are you 'X' or 'O'?\n";
		cin >> initPlayer;
		game.start_game(initPlayer);
		while (cont != "N")
		{
			int markPosition;
			cout << "Put \'" << game.get_player() << "\' where on the board (1-9)?\n";
			cin >> markPosition;
			try
			{
				game.mark_board(markPosition);
			}
			catch (Error & e)
			{
				cout << e.get_message();
				break;
			}
			cout << "Do you want to continue (Y/N)?\n";
			cin >> cont;
		}
	}
	catch (Error & e)
	{
		cout << e.get_message();
	}
	return 0;
}