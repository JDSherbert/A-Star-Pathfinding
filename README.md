![image](https://upload.wikimedia.org/wikipedia/commons/9/98/AstarExampleEn.gif)

# Repository Template

<!-- Header Start -->
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/JDSherbert-Repo-Template?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/JDSherbert-Repo-Template?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/JDSherbert-Repo-Template?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/JDSherbert-Repo-Template?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FJDSherbert-Repo-Template%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href="https://docs.unrealengine.com/5.3/en-US/"> 
  <img align="left" alt="Unreal Engine Template" src="https://img.shields.io/badge/Unreal%20Engine%20Template-black?style=for-the-badge&logo=unrealengine&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/unlicense/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20Unlicense-black?style=for-the-badge&logo=unlicense&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview
The A* (A-star) algorithm is a popular pathfinding algorithm commonly used in robotics, games, and other applications where finding the shortest path between two points is necessary. A* is an extension of Dijkstra's algorithm with the added benefit of heuristic evaluation, making it more efficient for pathfinding in many cases.

#### Objective: 
Find the shortest path from a starting point to a goal point in a graph (or grid).

#### Data Structure: 
A* uses a priority queue to efficiently select the node with the lowest total cost from the start to the current node, considering both the cost to reach the current node (g value) and the estimated cost to reach the goal from the current node (h value).

## Key Components

##### Nodes (or Cells): 
The graph is made up of nodes representing positions in the environment. Each node has coordinates, and in a grid-based scenario, nodes correspond to grid cells.

#### Edges (or Connections): 
Define the connections between nodes. In a grid, nodes are typically connected to their adjacent neighbors.

#### Costs:
- g (Cost from Start): The cost to reach a node from the start node.
- h (Heuristic Cost to Goal): An estimate of the cost from the current node to the goal. It is the heuristic function's role to provide this estimate.
- f (Total Cost): The sum of g and h. This is the value used to prioritize nodes in the priority queue.
- Priority Queue: Nodes are stored in a priority queue sorted by their f values. This ensures that nodes with lower total costs are explored first.

#### Heuristic Function: 
A* uses a heuristic function to estimate the cost from the current node to the goal. This function should be admissible (never overestimates) to guarantee the optimality of the solution.

## Algorithm Steps

Initialization:

Create the start node and add it to the open list (priority queue).
Initialize g and h values of the start node.
Set g to 0 for the start node.
Main Loop:

While the open list is not empty:
Pop the node with the lowest f value from the open list.
If the current node is the goal, the path is found.
Generate Successors:

For each neighboring node (successor) of the current node:
Calculate g and h values for the successor.
If the successor is not in the open list, calculate f and add it to the open list.
If the successor is in the open list and the new g value is lower, update g and f.
Termination:

If the open list is empty, and the goal is not reached, there is no path.
Heuristic Function:
The effectiveness of A* heavily relies on the quality of the heuristic function.
A good heuristic should be admissible (never overestimate the cost) to guarantee the optimality of the solution.
Common heuristics include Manhattan distance, Euclidean distance, and Chebyshev distance, depending on the nature of the environment.


-----------------------------------------------------------------------

