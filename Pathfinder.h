// ©2023 JDSherbert. All rights reserved.
#pragma once

#include <vector>
#include <queue>
#include <cmath>

// Define a structure to represent a node in the graph
struct Node
{
    int x, y; // Coordinates of the node in the graph
    int f, g, h; // Values used by the A* algorithm

    Node(int r, int c);

    // Overload comparison operators for priority queue
    bool operator>(const Node& other) const;
    bool operator==(const Node& other) const;
};

// A* pathfinding algorithm
std::vector<Node> FindPath(const std::vector<std::vector<int>>& graph, const Node& start, const Node& goal);

// Function to print the path
void PrintPath(const std::vector<Node>& path);
