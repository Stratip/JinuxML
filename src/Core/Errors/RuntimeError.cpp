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

#include "Core/Errors/RuntimeError.hpp"
#include <string_view>

namespace JinuxML::Core::Errors {

RuntimeError::RuntimeError() noexcept = default;

RuntimeError::RuntimeError(const RuntimeError& Other) noexcept = default;

auto RuntimeError::operator=(const RuntimeError& Other) noexcept
    -> RuntimeError& = default;

RuntimeError::RuntimeError(RuntimeError&& Other) noexcept = default;

auto RuntimeError::operator=(RuntimeError&& Other) noexcept
    -> RuntimeError& = default;

RuntimeError::~RuntimeError() noexcept = default;

[[nodiscard]] auto RuntimeError::getErrorMessage() const noexcept
    -> std::string_view {

    return "runtimeError: an error occurred internally within an interface";
}

[[nodiscard]] auto RuntimeError::what() const noexcept -> const char* {

    return this->RuntimeError::getErrorMessage().data();
}

} // namespace JinuxML::Core::Errors