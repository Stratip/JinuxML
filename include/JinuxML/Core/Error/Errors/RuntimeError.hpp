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

#ifndef JINUXML_CORE_ERROR_ERRORS_RUNTIMEERROR_HPP
#define JINUXML_CORE_ERROR_ERRORS_RUNTIMEERROR_HPP

#include "../Error.hpp"

namespace JinuxML::Core::Error::Errors {

/**
 * @brief A generic runtime error.
 *
 * A runtime error is an error that occured within an interface for internal reasons as opposed to
 * the way it was used, it is an error that could not normally have been predicted or avoided e.g.
 * Out Of Memory, Device Disconnected, Protocol Violation, etc. The main purpose of this class is to
 * provide generic programming constructs and type safety to interfaces that operate on a wide
 * variety of runtime errors.
*/
class RuntimeError : public Error {

	public:
	// ============================== Constants ==============================

	/*...*/

	// ============================== Functions ==============================

	virtual
	~RuntimeError(
	)
	override
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
}; // class RuntimeError
} // namespace JinuxML::Core::Error::Errors

#endif // JINUXML_CORE_ERROR_ERRORS_RUNTIMEERROR_HPP

