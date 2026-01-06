#include "maze.h"
#include "mouse.h"

// Simple fixed maze (hardcoded)
bool wallAt(int x, int y, int dir) {
  if (x < 0 || y < 0 || x >= MAZE_SIZE || y >= MAZE_SIZE)
    return true;

  // Example walls
  if (x == 2 && y == 2 && dir == NORTH) return true;
  if (x == 1 && y == 3 && dir == EAST)  return true;

  return false;
}
