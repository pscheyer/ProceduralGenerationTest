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

Added stub implementation to `Map.m` for `mapWithGridSize` and `initWithGridSize`.

Game currently creates map without borders, and hero/exit spawn simultaneously and in same location, causing new map and spawn. Loops.

###Drunkard Walk Algorithm
Using the Drunkard Walk subtype of random walk to generate the dungeon.

Drunkard Walk Description:
1. Choose a random start position in grid and mark it as floor
2. Pick a random direction to move.
3. Move in that direction and mark the position as a floor, unless it already is a floor.
4. Repeat steps 2 and 3 until a desired number of floors have been placed in the grid.

We'll make a property to hold the number of tiles to generate so that the map can be flexible.

20150925 1015CST
add stub implementation of `generateTileGrid` to `Map.m`. Stub sets start position to center of grid and then enters a loop that runs until the `currentFloor` is equal to the desired number of floor tiles defined by the `maxFloorCount` property.

###Managing the Tile Grid
`MapTiles` class is a wrapper for a dynamic C array that will manage a 2d grid for the map class.

A C array is used instead of an NSMutableArray to avoid boxing integers into object and then unboxing them again to use them. `MapTiles` grid is an array of integers, so a C array works.

Added enum to `MapTiles.h`. It enumerates four types of `MapTileType` corresponding to -1 through 2. Integer values were selected to make it easier to convert the 2d grid array into the tiles located in tiles.atlas named `1.png` and `2.png`.

add properties and method prototypes to `MapTiles.h`. 

-NSUInteger `count`
-CGSize `gridSize`

-instanceType `initWithGridSize` that takes a CGSize `size`
-MapTileType `tileTypeAt` takes a CGPoint `tileCoordinate`
-`setTileType` takes a MapTileType `type` and a CGPoint `tileCoordinate`.
-BOOL `isEdgeTileAt` takes a CGPoint `tileCoordinate`
-BOOL `isValidTileCoordinateAt` takes a CGPoint `tileCoordinate`.


