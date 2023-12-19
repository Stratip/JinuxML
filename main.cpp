#include "Core/Graph.hpp"
#include <cstdint>
#include <iostream>

// NOLINTNEXTLINE(bugprone-exception-escape)
auto main() -> int {

    JinuxML::Core::Graph<uint64_t, uint64_t> graph;
    graph.addEdge(123, 0);
    graph.addEdge(123, 1);
    graph.addVertex(123, 0);
    graph.addVertex(123, 0);

    return 0;
}