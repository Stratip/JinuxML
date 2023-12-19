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

#ifndef CORE_ERRORS_RUNTIMEERRORS_MEMORYALLOCATIONERROR_HPP
#define CORE_ERRORS_RUNTIMEERRORS_MEMORYALLOCATIONERROR_HPP

#include "../RuntimeError.hpp"
#include <memory>
#include <string>
#include <string_view>

namespace JinuxML::Core::Errors::RuntimeErrors {

class MemoryAllocationError : public RuntimeError {

    public:
    MemoryAllocationError() noexcept;

    MemoryAllocationError(std::string_view AttemptedAllocationInfo);

    MemoryAllocationError(const MemoryAllocationError& Other) noexcept;

    auto operator=(const MemoryAllocationError& Other) noexcept
        -> MemoryAllocationError&;

    MemoryAllocationError(MemoryAllocationError&& Other) noexcept;

    auto operator=(MemoryAllocationError&& Other) noexcept
        -> MemoryAllocationError&;

    ~MemoryAllocationError() noexcept override;

    [[nodiscard]] auto getErrorMessage() const noexcept
        -> std::string_view override;

    [[nodiscard]] auto what() const noexcept -> const char* override;

    /*...*/

    protected:
    /*...*/

    private:
    std::shared_ptr<std::string> ErrorMessage;

    /*...*/
}; // class MemoryAllocationError
} // namespace JinuxML::Core::Errors::RuntimeErrors

#endif // CORE_ERRORS_RUNTIMEERRORS_MEMORYALLOCATIONERROR_HPP