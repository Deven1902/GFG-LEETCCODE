/* 
1) initializes an adjacency list (graph) to represent the relationships  
2) inDegree array is used to track the prerequisites of each course.
3) queue (q) is initialized for topological sorting of courses.
4) array (dist) is initialized to track the time required for each course
input relations are used to build the directed graph.
6) Kahn's algorithm is used for topological sorting
7) The time required for each course (dist) is updated based on its prerequisites.
8) maximum time needed to complete any course is calculated using ranges::max
9) result is the minimum time required to complete all the courses
*/

class Solution {
 public:
  int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
    // Create an adjacency list to represent the graph.
    vector<vector<int>> graph(n);
    
    // Initialize in-degree array to track the prerequisites of each course.
    vector<int> inDegree(n);
    
    // Initialize a queue for topological sorting.
    queue<int> q;
    
    // Initialize an array to track the time required for each course.
    vector<int> dist(time);

    // Build graph.
    for (const vector<int>& r : relations) {
      const int u = r[0] - 1;
      const int v = r[1] - 1;
      graph[u].push_back(v);
      ++inDegree[v];
    }

    // Topological sorting using Kahn's algorithm.
    for (int i = 0; i < n; ++i)
      if (inDegree[i] == 0)
        q.push(i);

    // Process courses in topological order.
    while (!q.empty()) {
      const int u = q.front();
      q.pop();
      for (const int v : graph[u]) {
        // Update the time required for course v based on its prerequisites.
        dist[v] = max(dist[v], dist[u] + time[v]);
        if (--inDegree[v] == 0)
          q.push(v);
      }
    }

    // Return the maximum time needed to complete any course.
    return ranges::max(dist);
  }
};


// time complexity:- O(V+E) -> V = no. of courses && E = prerquisite realtions

// space complexity:- O(V) -> V= no. of courses. 