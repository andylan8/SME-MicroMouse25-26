#pragma once

enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3
};

class Mouse {
public:
  int x;
  int y;
  Direction dir;
  Mouse(int tempx, int tempy, Direction temp){
    x = tempx;
    y = tempy;
    dir = temp;
  }
};

void moveForward(Mouse &m);
void turnLeft(Mouse &m);
void turnRight(Mouse &m);
