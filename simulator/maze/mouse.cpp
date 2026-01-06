#include "mouse.h"

void turnLeft(Mouse &m) {
  m.dir = (Direction)((m.dir + 3) % 4);
}

void turnRight(Mouse &m) {
  m.dir = (Direction)((m.dir + 1) % 4);
}

void moveForward(Mouse &m) {
  if (m.dir == NORTH) m.y++;
  if (m.dir == EAST)  m.x++;
  if (m.dir == SOUTH) m.y--;
  if (m.dir == WEST)  m.x--;
}
