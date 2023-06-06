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

#ifndef JINUXML_CORE_GRAPH_ELEMENTS_VERTEX_HPP
#define JINUXML_CORE_GRAPH_ELEMENTS_VERTEX_HPP

#include "../Element.hpp"

namespace JinuxML::Core::Graph::Elements {

/**
 * @brief A vertex in a computational graph.
 *
 * This element defines the computational actions and device interactions in a graph. The main
 * purpose of this class is to provide generic programming constructs and type safety to interfaces
 * that operate on a wide variety of vertices.
*/
class Vertex : public Element {

	public:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	/**
	 * @brief Abstract destructor of the Vertex class.
	*/
	virtual
	~Vertex(
	)
	= 0;

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

	/*...*/

	// ============================ Miscellaneous ============================

	/*...*/
}; // class Vertex
} // namespace JinuxML::Core::Graph::Elements

#endif // JINUXML_CORE_GRAPH_ELEMENTS_VERTEX_HPP

