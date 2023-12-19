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

#ifndef CORE_ERROR_HPP
#define CORE_ERROR_HPP

#include <exception>
#include <string_view>

namespace JinuxML::Core {

class Error : public std::exception {

    public:
    Error() noexcept;

    Error(const Error& Other) noexcept;

    auto operator=(const Error& Other) noexcept -> Error&;

    Error(Error&& Other) noexcept;

    auto operator=(Error&& Other) noexcept -> Error&;

    ~Error() noexcept override;

    [[nodiscard]] virtual auto getErrorMessage() const noexcept
        -> std::string_view = 0;

    [[nodiscard]] auto what() const noexcept -> const char* override = 0;

    /*...*/

    protected:
    /*...*/

    private:
    /*...*/
}; // class Error
} // namespace JinuxML::Core

#endif // CORE_ERROR_HPP