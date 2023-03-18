//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/Date.hpp"
#include "Resume/Types/String.hpp"

#include <vector>
#include <optional>

namespace Resume::Model {
using namespace Resume::Types;
struct Job {
    String companyName;
    String website;
    Date startDate;
    std::optional<Date> endDate;
    String location;
    String position;
    String responsibility;
    std::vector<String> headlines;
};
using Jobs = std::vector<Job>;
}  // namespace Resume::Model
