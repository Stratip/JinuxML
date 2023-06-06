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

#ifndef JINUXML_CORE_GRAPH_ELEMENT_HPP
#define JINUXML_CORE_GRAPH_ELEMENT_HPP

#include <string>

namespace JinuxML::Core::Graph {

/**
 * @brief An element in a computational graph.
 *
 * This may be an edge, a vertex or anything else in a computational graph. The main purpose of this
 * class is to provide generic programming constructs and type safety to interfaces that operate on
 * a wide variety of elements.
*/
class Element {

	public:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	/**
	 * @brief The constructor of the Element class.
	 *
	 * @param name The name of the element.
	 *
	 * @throws std::bad_alloc Thrown if an internal memory allocation failed.
	*/
	Element(
		const std::string& name
	);

	/**
	 * @brief Abstract destructor of the Element class.
	*/
	virtual
	~Element(
	)
	= 0;

	/**
	 * @brief Gets the name of the element.
	 *
	 * @returns The name of the element.
	*/
	auto
	getName(
	)
	const noexcept
	-> const std::string&;
	

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

	/**
	 * @brief The name of the element.
	*/
	const std::string name;

	/*...*/

	// ============================== Functions ==============================

	/*...*/

	// ============================== Variables ==============================

	/*...*/

	// ============================ Miscellaneous ============================

	/*...*/
}; // class Element
} // namespace JinuxML::Core::Graph

#endif // JINUXML_CORE_GRAPH_ELEMENT_HPP

