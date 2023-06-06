/*
Copyright 2023 Ishaan Hegde

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef JINUXML_CORE_GRAPH_COMPUTATIONALGRAPH_HPP
#define JINUXML_CORE_GRAPH_COMPUTATIONALGRAPH_HPP

#include <memory>
#include <set>
#include <vector>

#include "Elements/Edge.hpp"
#include "Elements/Vertex.hpp"

namespace JinuxML::Core::Graph {

/**
 * @brief A directed acyclic graph defining computational operations.
 *
 * The main elements used to build up a graph are vertices and edges, they represent the
 * computational actions/device interactions and the dependencies/vertex interactions respectively.
 * A graph will do two types of sanity checks on itself as it is built:
 * + Structural checks: Makes sure the graph is structurally valid. (Checks that the graph does not
 * have any cycles and finitely propgates values in a definite direction.)
 * + Logical checks: Makes sure the graph is logically valid. (Checks the type information of
 * vertices and edges to make sure the types being processed and passed around are compatible.)
 *
 * @see Element
 * @see Elements::Edge
 * @see Elements::Vertex
*/
class ComputationalGraph {

	public:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	/**
	 * @brief Adds a vertex to the graph.
	 *
	 * This function does not automatically connect the added vertex to any other vertices in
	 * the graph, the added vertex is simply pushed back into a list of all the vertices in the
	 * entire graph, the edges connecting the vertex must be added by the user after the vertex
	 * is added.
	 *
	 * @param vertex The vertex that is to be added to the graph.
	 *
	 * @throws 
	*/
	virtual
	auto
	addVertex(
		const Elements::Vertex& vertex
	)
	-> void;

	virtual
	auto
	addEdge(
		const Elements::Edge& edge
	)
	-> void;

	/*...*/

	// ============================== Variables ==============================

	/*...*/

	// ============================ Miscellaneous ============================

	/*...*/

	protected:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	/*...*/

	// ============================== Variables ==============================

	/*...*/

	// ============================ Miscellaneous ============================

	/*...*/

	private:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	/*...*/

	// ============================== Variables ==============================

	std::vector<std::vector<std::shared_ptr<Elements::Vertex>>> vertices;

	std::vector<std::vector<std::set<std::shared_ptr<Elements::Edge>>>> edges;

	/*...*/

	// ============================ Miscellaneous ============================

	/*...*/
}; // class ComputationalGraph
} // namespace JinuxML::Core::Graph

#endif // JINUXML_CORE_GRAPH_COMPUTATIONALGRAPH_HPP

