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

#include "Core/Errors/RuntimeErrors/MemoryAllocationError.hpp"
#include <memory>
#include <new>
#include <string>
#include <string_view>

namespace JinuxML::Core::Errors::RuntimeErrors {

MemoryAllocationError::MemoryAllocationError() noexcept = default;

MemoryAllocationError::MemoryAllocationError(
    std::string_view AttemptedAllocationInfo
) {

    // A vague default error message is always more helpful that an empty one.
    if (!AttemptedAllocationInfo.empty()) {

        try {

            this->ErrorMessage = std::make_shared<std::string>(
                "memoryAllocationError: "
                "a memory allocation failed:\r\n"
                "\t" +
                std::string(AttemptedAllocationInfo)
            );
        } catch (const std::bad_alloc& e) {

            // The default constructor of MemoryAllocationError is noexcept.
            // There is no need to worry about another memory allocation failing
            // again.
            throw MemoryAllocationError();
        }
    }
}

MemoryAllocationError::MemoryAllocationError(const MemoryAllocationError& Other
) noexcept = default;

auto MemoryAllocationError::operator=(const MemoryAllocationError& Other
) noexcept -> MemoryAllocationError& = default;

MemoryAllocationError::MemoryAllocationError(MemoryAllocationError&& Other
) noexcept = default;

auto MemoryAllocationError::operator=(MemoryAllocationError&& Other) noexcept
    -> MemoryAllocationError& = default;

MemoryAllocationError::~MemoryAllocationError() noexcept = default;

[[nodiscard]] auto MemoryAllocationError::getErrorMessage() const noexcept
    -> std::string_view {

    if (this->ErrorMessage != nullptr) {

        return *this->ErrorMessage;
    }

    return "memoryAllocationError: a memory allocation failed on the host";
}

[[nodiscard]] auto MemoryAllocationError::what() const noexcept -> const char* {

    return this->MemoryAllocationError::getErrorMessage().data();
}

} // namespace JinuxML::Core::Errors::RuntimeErrors