// ©2023 JDSherbert. All rights reserved.
#pragma once

#include <vector>

// Define a structure to represent a node in the graph
struct Node
{
    int x, y; // Coordinates of the node in the graph
    int f, g, h; // Cost values used by the A* algorithm

    Node(int _x = 0, int _y = 0);

    // Overload comparison operators for priority queue
    bool operator>(const Node& other) const;
    bool operator==(const Node& other) const;
};

// Finds a path from start to goal using the A* algorithm.
// @graph should be a 2D grid where 0 = walkable, 1 = blocked.
std::vector<Node> FindPath(const std::vector<std::vector<int>>& graph, const Node& start, const Node& goal);

// Function to print the path
void PrintPath(const std::vector<Node>& path);
