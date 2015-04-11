// Graze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"
#include "oNoteSpawn.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Game game;
	GameObject* spawn = new oNoteSpawn();
	game.addGameObject(spawn);
	while (1)
		game.update();
	return 0;
}

