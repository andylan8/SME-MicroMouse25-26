//Psuedocode

/*
openSet      ← priority queue (ordered by lowest f-score)
closedSet    ← empty set

cameFrom[x][y]   // stores parent cell
gScore[x][y]     // cost from start to cell
fScore[x][y]     // estimated total cost
*/

/*
function heuristic(a, b)
    return ManhattanDistance(a, b)
*/

/*
funciton AStar(start, goal)
    for each cell in grid
        gScore[cell] ← ∞
        fScore[cell] ← ∞

    gScore[start] ← 0
    fScore[start] ← heuristic(start, goal)

    insert start into openSet

    while openSet not empty
        current ← node in openSet with lowest fScore

        if current = goal
            return reconstructPath(cameFrom, current)
        

        remove current from openSet
        add current to closedSet

        for each neighbor of current
            if neighbor is blocked or in closedSet
                continue
            

            tentativeG ← gScore[current] + movementCost(current, neighbor)

            if neighbor not in openSet
                insert neighbor into openSet
            else if tentativeG ≥ gScore[neighbor]
                continue
            

            cameFrom[neighbor] ← current
            gScore[neighbor] ← tentativeG
            fScore[neighbor] ← gScore[neighbor] + heuristic(neighbor, goal)

    return failure   // no path found

*/

/*
function reconstructPath(cameFrom, current)
    path ← empty list
    add current to path

    while current exists in cameFrom
        current ← cameFrom[current]
        add current to path

    reverse path
    return path
*/

/*
function movementCost(a, b)
    return 1   // uniform grid cost

*/