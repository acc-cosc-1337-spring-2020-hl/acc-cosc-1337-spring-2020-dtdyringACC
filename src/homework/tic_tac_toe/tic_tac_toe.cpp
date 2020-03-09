#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
	if (first_player != "X" && first_player != "O")
	{
		throw Error("Error: Player must be either X or O");
	}
	else
	{
		player = first_player;
	}
}

void TicTacToe::mark_board(int position)
{
	if (player != "X" && player != "O")
	{
		throw Error("Error: must start game first. \n");
	}
	else if (position > 1 && position < 9)
	{
		set_next_player();
	}
	else
	{
		throw Error("Error: Position must be 1 to 9.\n");
	}

}

void TicTacToe::set_next_player()
{
	if (player == "X") {
		player = "O";
	}
	else
	{
		player = "X";
	}
}