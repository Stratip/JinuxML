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

#ifndef JINUXML_CORE_ERROR_ERRORS_INVALIDUSAGEERROR_HPP
#define JINUXML_CORE_ERROR_ERRORS_INVALIDUSAGEERROR_HPP

#include "../Error.hpp"

namespace JinuxML::Core::Error::Errors {

/**
 * @brief A generic invalid usage error.
 *
 *
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

