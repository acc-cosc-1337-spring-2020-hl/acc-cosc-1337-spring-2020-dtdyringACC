#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify can't invoke mark_board before start_game")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Verify start_game accepts only X or O")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);
}

TEST_CASE("Verify set first player to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify set first player to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify start game w/ X game flow")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
	game.mark_board(4);
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify start game w/ O game flow")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
	game.mark_board(2);
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify mark_board can't accept out of range")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE_THROWS_AS(game.mark_board(15), Error);
}

TEST_CASE("Verify game over when board full")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}