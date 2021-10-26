#include <iostream>
#include "./Constants.h"
#include "./Game.h"


int main(int argc, char *args[]) {

	// create a new object of Game class
	// In C++ there are different ways to create an object:
	// heap: we create an object in heap memory space. This called dynamic allocation 
	// In this case you have to free the object ( manually )
	// stack: we can create an object in the stack
	
	/* Declare an object in the (heap) By this way you create an pointer object of type Game
	Game *game = new Game(); */
	
	// stack: we create this object in the stack, so we don't have to remember to clear the object from mem space
	// we just simply define game variabel of Type Game
	
	// To access pointer object methods  of type Game, we use the arrow notation ( -> )
	// But when we defined game as an object of type Game
	// we use ( . ) dot notation to access game object methods
	Game game;

	game.Initialize(WINDOW_WIDTH,WINDOW_HEIGHT);

	while(game.IsRunning()){
		game.ProcessInput();
		game.Update();
		game.Render();
	}

	game.Destroy();
	return 0;
}
