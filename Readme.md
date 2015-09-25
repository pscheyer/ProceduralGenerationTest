20150925 948CST
#Procedural Generation Test

This is a runthrough of a tutorial from [Ray Wenderlich on SpriteKit Procedural Level Generation](http://www.raywenderlich.com/49502/procedural-level-generation-in-games-tutorial-part-1)

Downloaded the starter project. Runs fine for once. 

##Key Classes:
Map: Creates a basic 10x10 Square that functions as the level for the game.

MapTiles: A helper class managing a 2d grid of tiles.

DPad: provides a basic implementation of a joystick to control the player's character, a cat.

MyScene: Sets up the SpriteKit scene and processes game logic.

###The Beginnings of a New Map
Three key features of a good game level:

Feasibility- can you beat it?
Interesting Design- do you want to beat it?
Skill Level- is it a good challenge?

Our design is currently not very interesting, and it is too easy to win.

We'll rebuild the map class from scratch.

20150925 1004CST
added several features to new `Map` class. In `Map.h` added properties `gridSize` (`CGSize`), `spawnPoint` (`CGPoint`), `exitpoint` (`CGPoint`). Also added instancetypes for the `mapWithGridSize` and `initWithGridSize`. 


