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

#ifndef CORE_ERRORS_INVALIDUSAGEERROR_HPP
#define CORE_ERRORS_INVALIDUSAGEERROR_HPP

#include "../Error.hpp"
#include <string_view>

namespace JinuxML::Core::Errors {

class InvalidUsageError : public Error {

    public:
    InvalidUsageError() noexcept;

    InvalidUsageError(const InvalidUsageError& Other) noexcept;

    auto operator=(const InvalidUsageError& Other) noexcept
        -> InvalidUsageError&;

    InvalidUsageError(InvalidUsageError&& Other) noexcept;

    auto operator=(InvalidUsageError&& Other) noexcept -> InvalidUsageError&;

    ~InvalidUsageError() noexcept override;

    [[nodiscard]] auto getErrorMessage() const noexcept
        -> std::string_view override = 0;

    [[nodiscard]] auto what() const noexcept -> const char* override = 0;

    /*...*/

    protected:
    /*...*/

    private:
    /*...*/
}; // class InvalidUsageError
} // namespace JinuxML::Core::Errors

#endif // CORE_ERRORS_INVALIDUSAGEERROR_HPP