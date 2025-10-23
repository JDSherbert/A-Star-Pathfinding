// ©2023 JDSherbert. All rights reserved.

#include "Pathfinder.h"
#include <iostream>

// Example main method to show how the pathfinder works
int main()
{
    std::vector<std::vector<int>> grid = 
    {
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0}
    };

    Node start(0, 0);
    Node goal(3, 4);

    auto path = FindPath(grid, start, goal);
    if (!path.empty())
    {
        std::cout << "Path found:\n";
        PrintPath(path);
    }
    else
    {
        std::cout << "No path found.\n";
    }
}
