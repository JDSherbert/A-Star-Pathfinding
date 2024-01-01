// ©2023 JDSherbert. All rights reserved.
#include "Pathfinder.h"

#include <algorithm>
#include <iostream>

Node::Node(int _x, int _y) 
: x(_x)
, y(_y)
, f(0)
, g(0)
, h(0) 
{
}

bool Node::operator>(const Node& other) const 
{
    return f > other.f;
}

bool Node::operator==(const Node& other) const 
{
    return x == other.x && y == other.y;
}

std::vector<Node> FindPath(const std::vector<std::vector<int>>& graph, const Node& start, const Node& goal) 
{
    // Define possible movements (4 directions: up, down, left, right)
    const int directionX[] = {-1, 0, 1, 0};
    const int directionY[] = {0, 1, 0, -1};

    // Initialize the open and closed lists
    priority_queue<Node, vector<Node>, greater<Node>> openList;
    vector<vector<bool>> closedList(graph.size(), vector<bool>(grid[0].size(), false));

    // Start node
    openList.push(start);

    // Main loop
    while (!openList.empty()) 
    {
        // Get the cell with the lowest f value from the open list
        Node current = openList.top();
        openList.pop();

        // Check if the current cell is the goal
        if (current == goal) 
        {
            // Reconstruct the path
            vector<Node> path;
            while (!(current == start)) 
            {
                path.push_back(current);
                current = graph[current.x][current.y];
            }
            path.push_back(start);
            reverse(path.begin(), path.end());
            return path;
        }

        // Mark the current cell as closed
        closedList[current.x][current.y] = true;

        // Explore neighbors
        for (int i = 0; i < 4; ++i) 
        {
            int newX = current.x + directionX[i];
            int newY = current.y + directionY[i];

            // Check if the neighbor is within the grid boundaries
            if (newX >= 0 && newX < graph.size() && newY >= 0 && newY < grid[0].size()) 
            {
                // Check if the neighbor is walkable and not in the closed list
                if (graph[newX][newY] == 0 && !closedList[newX][newY]) 
                {
                    Node neighbor(newX, newY);
                    int newG = current.g + 1;

                    // Check if the neighbor is not in the open list or has a lower g value
                    if (newG < neighbor.g || !closedList[newX][newY]) 
                    {
                        neighbor.g = newG;
                        neighbor.h = abs(newX - goal.x) + abs(newY - goal.y);
                        neighbor.f = neighbor.g + neighbor.h;
                        graph[newX][newY] = current; // Update the parent of the neighbor
                        openList.push(neighbor); // Add the neighbor to the open list
                    }
                }
            }
        }
    }

    // No path found
    return vector<Node>();
}

void PrintPath(const std::vector<Node>& path) 
{
    for (const Node& node : path) 
    {
        std::cout << "(" << node.x << ", " << node.y << ") ";
    }
    std::cout << std::endl;
}
