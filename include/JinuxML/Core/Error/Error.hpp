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

#ifndef JINUXML_CORE_ERROR_ERROR_HPP
#define JINUXML_CORE_ERROR_ERROR_HPP

#include <exception>

namespace JinuxML::Core::Error {

/**
 * @brief A generic error.
 *
 * The main purpose of this class is to provide generic programming constructs and type safety to
 * interfaces that operate on a wide variety of errors.
*/
class Error {

	public:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	virtual
	~Error(
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
}; // class Error
} // namespace JinuxML::Core::Error

#endif // JINUXML_CORE_ERROR_ERROR_HPP

