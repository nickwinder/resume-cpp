//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/String.hpp"

#include <vector>

namespace Resume::Model {
using namespace Resume::Types;
struct Copy {
    std::vector<String> blogPosts;
    std::vector<String> websites;
};
}  // namespace Resume::Model
