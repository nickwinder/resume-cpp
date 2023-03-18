//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/String.hpp"
#include "Resume/Types/Date.hpp"

#include <vector>

namespace Resume::Model {
using namespace Resume::Types;
struct Degree {
    String university;
    String title;
    Date startDate;
    Date endDate;
    String result;
    std::vector<String> modules;
};
using Degrees = std::vector<Degree>;
}  // namespace Resume::Model
