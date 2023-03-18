//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include <array>

namespace Resume::Types {
template <typename Key, typename Value, std::size_t Size>
using Map = std::array<std::pair<Key, Value>, Size>;
}
