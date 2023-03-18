//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/Date.hpp"
#include "Resume/Types/Environments.hpp"
#include "Resume/Types/SoftwareLanguage.hpp"
#include "Resume/Types/Tools.hpp"

#include <vector>

namespace Resume::Model {
using namespace Resume::Types;
struct PersonalSummary {
    Date experienceStart;
    SoftwareLanguage focusLanguage;
    std::vector<SoftwareLanguage> proficientLanguages;
    std::vector<SoftwareLanguage> competentLanguages;
    Tools tools;
    Environments environments;
    std::vector<String> headlines;
};
}  // namespace Resume::Model
