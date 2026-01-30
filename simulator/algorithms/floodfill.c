//Pseudocode

/*
mazeWidth ← 16
mazeHeight ← 16

cellValue[mazeWidth][mazeHeight]     // distance values
wallNorth[mazeWidth][mazeHeight]
wallSouth[mazeWidth][mazeHeight]
wallEast[mazeWidth][mazeHeight]
wallWest[mazeWidth][mazeHeight]

mouseX ← 0
mouseY ← 0
mouseDirection ← NORTH
*/

/*
function initializeFloodFill()
    for each cell (x, y) in maze
        cellValue[x][y] = ManhattanDistanceToCenter(x, y)
*/

/*
main()
    initializeFloodFill()

    while not atGoal(mouseX, mouseY)
        senseWalls()
        updateWalls()

        if noNeighborHasLowerValue()
            floodFill()

        moveToLowestNeighbor()
*/

/*
function senseWalls()
    if front sensor detects wall
        mark wall in front of mouse
    if left sensor detects wall
        mark wall to left of mouse
    if right sensor detects wall
        mark wall to right of mouse

*/

/*
function floodFill()
    queue ← empty queue
    enqueue (mouseX, mouseY)

    while queue not empty
        (x, y) ← dequeue(queue)

        minNeighbor ← minimum cellValue of all reachable neighbors

        if cellValue[x][y] ≠ minNeighbor + 1
            cellValue[x][y] ← minNeighbor + 1

            for each neighbor without a wall
                enqueue(neighbor)

*/

/*
function moveToLowestNeighbor()
    bestDirection ← current direction
    lowestValue ← cellValue[mouseX][mouseY]

    for each neighbor without wall
        if cellValue[neighbor] < lowestValue
            lowestValue ← cellValue[neighbor]
            bestDirection ← direction to neighbor

    turn mouse toward bestDirection
    move forward one cell
    update mouseX, mouseY
*/

/*
function atGoal(x, y)
    return (x, y) is one of center cells
*/