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

#include "Core/Errors/InvalidUsageError.hpp"
#include <string_view>

namespace JinuxML::Core::Errors {

InvalidUsageError::InvalidUsageError() noexcept = default;

InvalidUsageError::InvalidUsageError(const InvalidUsageError& Other
) noexcept = default;

auto InvalidUsageError::operator=(const InvalidUsageError& Other) noexcept
    -> InvalidUsageError& = default;

InvalidUsageError::InvalidUsageError(InvalidUsageError&& Other
) noexcept = default;

auto InvalidUsageError::operator=(InvalidUsageError&& Other) noexcept
    -> InvalidUsageError& = default;

InvalidUsageError::~InvalidUsageError() noexcept = default;

[[nodiscard]] auto InvalidUsageError::getErrorMessage() const noexcept
    -> std::string_view {

    return "invalidUsageError: an error occurred due to an interface being "
           "used incorrectly";
}

[[nodiscard]] auto InvalidUsageError::what() const noexcept -> const char* {

    return this->InvalidUsageError::getErrorMessage().data();
}

} // namespace JinuxML::Core::Errors