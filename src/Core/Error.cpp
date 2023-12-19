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

#include "Core/Error.hpp"
#include <string_view>

namespace JinuxML::Core {

Error::Error() noexcept = default;

Error::Error(const Error& Other) noexcept = default;

auto Error::operator=(const Error& Other) noexcept -> Error& = default;

Error::Error(Error&& Other) noexcept = default;

auto Error::operator=(Error&& Other) noexcept -> Error& = default;

Error::~Error() noexcept = default;

[[nodiscard]] auto Error::getErrorMessage() const noexcept -> std::string_view {

    return "error: an error occurred";
}

[[nodiscard]] auto Error::what() const noexcept -> const char* {

    return this->Error::getErrorMessage().data();
}

} // namespace JinuxML::Core