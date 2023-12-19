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

#include "Core/Errors/InvalidUsageErrors/InvalidArgumentError.hpp"
#include "Core/Errors/RuntimeErrors/MemoryAllocationError.hpp"
#include <memory>
#include <new>
#include <string>
#include <string_view>

namespace JinuxML::Core::Errors::InvalidUsageErrors {

InvalidArgumentError::InvalidArgumentError() noexcept = default;

// NOLINTNEXTLINE(misc-no-recursion)
InvalidArgumentError::InvalidArgumentError(std::string_view InvalidArgumentInfo
) {

    // A vague default error message is always more helpful that an empty one.
    if (!InvalidArgumentInfo.empty()) {

        try {

            this->ErrorMessage = std::make_shared<std::string>(
                "invalidArgumentError: "
                "an invalid argument was passed to an interface:\r\n"
                "\t" +
                std::string(InvalidArgumentInfo)
            );
        } catch (const std::bad_alloc& e) {

            throw RuntimeErrors::MemoryAllocationError();
        }
    } else {

        throw InvalidArgumentError(
            "InvalidArgumentError::"
            "InvalidArgumentError(std::string_view InvalidArgumentInfo): "
            "`InvalidArgumentInfo` is a view to an "
            "empty string which is disallowed"
        );
    }
}

InvalidArgumentError::InvalidArgumentError(const InvalidArgumentError& Other
) noexcept = default;

auto InvalidArgumentError::operator=(const InvalidArgumentError& Other) noexcept
    -> InvalidArgumentError& = default;

InvalidArgumentError::InvalidArgumentError(InvalidArgumentError&& Other
) noexcept = default;

auto InvalidArgumentError::operator=(InvalidArgumentError&& Other) noexcept
    -> InvalidArgumentError& = default;

InvalidArgumentError::~InvalidArgumentError() noexcept = default;

[[nodiscard]] auto InvalidArgumentError::getErrorMessage() const noexcept
    -> std::string_view {

    if (this->ErrorMessage != nullptr) {

        return *this->ErrorMessage;
    }

    return "invalidArgumentError: an invalid argument was passed to an "
           "interface";
}

[[nodiscard]] auto InvalidArgumentError::what() const noexcept -> const char* {

    return this->InvalidArgumentError::getErrorMessage().data();
}

} // namespace JinuxML::Core::Errors::InvalidUsageErrors