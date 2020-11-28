# Simple-Graph-Search-Algorithm
Simple Graph Search Algorithm Application with C++

Simple Graph Search Algorithm Application with C++ Searching a graph means systematically following the edges of the graph to "visit" or "discover" its vertices. Graph searching algorithms can discover much about a graph's structure. For problem state spaces represented as graphs, searching algorithms can find a problem's solution. We will examine two basic graph search algorithms. These are Breadth-first search and Depth-first search algorithm.

Breadth-First Search (BFS)

Objective: Given a graph and a vertex S, discover every vertex in the graph reachable from S.

Strategy: Discover all vertices at distance k from S before discovering any vertex at distance k+1.

Side Effects: The shortest-path distance from S to all vertices is found and a breadth-first tree is constructed

Depth-First Search (DFS)

Objective: Given a graph and a vertex S, discover every vertex in the graph reachable from S.

Strategy: As soon as a vertex is discovered, a new depth is explored (if possible) even if not all vertices at previous depths have been discovered.

Side Effects: A depth-first tree is constructed and However, the shortest-path distance from S to all vertices is not guaranteed.