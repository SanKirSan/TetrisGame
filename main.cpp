#include "Game/tetris/TetrisController.hpp"
#include "Game/engitime/EngiTimeController.hpp"

int main(const int argc, const char* args[])
{
	GameBase::Ptr game(new Tetris());

	game->start();

	return 0;
}
