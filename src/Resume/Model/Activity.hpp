//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/String.hpp"

#include <vector>

namespace Resume::Model {
using namespace Resume::Types;
struct Activity {
    String name;
    String highlight;
    String reference;
};

using Activities = std::vector<Activity>;
}  // namespace Resume::Model
