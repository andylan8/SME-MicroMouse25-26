#include <iostream>
#include "mouse.h"
#include "maze.h"


// Fake sensor functions
bool wallFront(const Mouse &m) {
  return wallAt(m.x, m.y, static_cast<int>(m.dir));
}

bool wallLeft(const Mouse &m) {
  int d = (static_cast<int>(m.dir) + 3) % 4;
  return wallAt(m.x, m.y, d);
}

bool wallRight(const Mouse &m) {
  int d = (static_cast<int>(m.dir) + 1) % 4;
  return wallAt(m.x, m.y, d);
}

int main() {
  Mouse mouse(0, 0, NORTH);

  for (int step = 0; step < 30; step++) {
    std::cout << "Mouse at (" << mouse.x << "," << mouse.y << ") dir=" << mouse.dir << "\n";

    // SAME LOGIC AS ARDUINO
    if (!wallRight(mouse)) {
      turnRight(mouse);
    }
    else if (!wallFront(mouse)) {
      moveForward(mouse);
    }
    else if (!wallLeft(mouse)) {
      turnLeft(mouse);
    }
    else {
      turnRight(mouse);
      turnRight(mouse);
    }
  }
}
