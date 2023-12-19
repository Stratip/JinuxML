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

#ifndef CORE_GRAPH_HPP
#define CORE_GRAPH_HPP

#include "Core/Errors/InvalidUsageErrors/InvalidArgumentError.hpp"
#include "Core/Errors/RuntimeErrors/MemoryAllocationError.hpp"

#include <cstdint>
#include <memory>
#include <new>
#include <unordered_map>
#include <unordered_set>
#include <utility>

namespace JinuxML::Core {

template <
    typename EdgeType,
    typename VertexType,
    typename EdgeIDType = uint_fast64_t,
    typename VertexIDType = uint_fast64_t>
class Graph final {

    public:
    Graph() try {
    } catch (const std::bad_alloc& e) {

        throw Errors::RuntimeErrors::MemoryAllocationError();
    }

    Graph(const Graph& Other); // Custom needed

    auto operator=(const Graph& Other) -> Graph&; // Custom needed

    Graph(Graph&& Other) noexcept; // Custom needed

    auto operator=(Graph&& Other) noexcept -> Graph&; // Custom needed

    ~Graph() noexcept = default;

    auto addEdge(const EdgeType& Edge, const EdgeIDType& EdgeID) -> void {

        std::unique_ptr<EdgeType> NewEdge;

        try {

            NewEdge = std::make_unique<EdgeType>(Edge);
        } catch (const std::bad_alloc& e) {

            throw Errors::RuntimeErrors::MemoryAllocationError();
        }

        try {

            auto EdgeInsertionResult =
                Edges.insert({EdgeID, std::move(NewEdge)});

            if (!EdgeInsertionResult.second) {

                throw Errors::InvalidUsageErrors::InvalidArgumentError(
                    "Graph::addEdge(): an edge with the given `EdgeID` already "
                    "exists"
                );
            }

            try {

                EdgeConnections.insert({EdgeID, {}});
            } catch (...) {

                Edges.erase(EdgeInsertionResult.first);

                throw Errors::RuntimeErrors::MemoryAllocationError();
            }
        } catch (const Errors::InvalidUsageErrors::InvalidArgumentError& e) {

            throw e;
        } catch (...) {

            throw Errors::RuntimeErrors::MemoryAllocationError();
        }
    }

    auto addVertex(const VertexType& Vertex, const VertexIDType& VertexID)
        -> void {

        std::unique_ptr<VertexType> NewVertex;

        try {

            NewVertex = std::make_unique<VertexType>(Vertex);
        } catch (const std::bad_alloc& e) {

            throw Errors::RuntimeErrors::MemoryAllocationError();
        }

        try {

            auto VertexInsertionResult =
                Vertices.insert({VertexID, std::move(NewVertex)});

            if (!VertexInsertionResult.second) {

                throw Errors::InvalidUsageErrors::InvalidArgumentError(
                    "Graph::addVertex(): a vertex with the given `VertexID` "
                    "already exists"
                );
            }

            try {

                VertexConnections.insert({VertexID, {}});
            } catch (...) {

                Vertices.erase(VertexInsertionResult.first);

                throw Errors::RuntimeErrors::MemoryAllocationError();
            }
        } catch (const Errors::InvalidUsageErrors::InvalidArgumentError& e) {

            throw e;
        } catch (...) {

            throw Errors::RuntimeErrors::MemoryAllocationError();
        }
    }

    /*...*/

    protected:
    /*...*/

    private:
    std::unordered_map<EdgeIDType, std::pair<VertexIDType, VertexIDType>>
        EdgeConnections;

    std::unordered_map<VertexIDType, std::unordered_set<EdgeIDType>>
        VertexConnections;

    std::unordered_map<EdgeIDType, std::unique_ptr<EdgeType>> Edges;
    std::unordered_map<VertexIDType, std::unique_ptr<VertexType>> Vertices;

    /*...*/
}; // class Graph
} // namespace JinuxML::Core

#endif // CORE_GRAPH_HPP