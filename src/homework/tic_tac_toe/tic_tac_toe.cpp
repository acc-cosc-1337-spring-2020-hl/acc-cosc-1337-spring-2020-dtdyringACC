#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
	if (first_player != "X" && first_player != "O")
	{
		throw Error("Error: Player must be either X or O");
	}
	else
	{
		clear_board();
		player = first_player;
	}
}

void TicTacToe::mark_board(int position)
{
	if (player == "")
	{
		throw Error("Error: must start game first. \n");
	}
	else if (position > 1 && position < 9)
	{
		pegs[position - 1] = player;
		set_next_player();
	}
	else
	{
		throw Error("Error: Position must be 1 to 9.\n");
	}

}

bool TicTacToe::game_over()
{
	return check_board_full();
}

void TicTacToe::display_board() const
{
	for (int i = 0; i< 9;i+=3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
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

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ") return false;
	}
	
	return true;
}

void TicTacToe::clear_board()
{
	for (auto peg : pegs)
	{
		peg = " ";
	}
}
