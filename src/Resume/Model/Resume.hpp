//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Model/Copy.hpp"
#include "Resume/Model/Experience.hpp"
#include "Resume/Model/PersonalSummary.hpp"
#include "Resume/Model/Education.hpp"
#include "Resume/Model/Fun.hpp"
#include "Resume/Types/String.hpp"

namespace Resume::Model {
using namespace Resume::Types;
struct Resume {
    String name;
    String title;
    PersonalSummary personalSummary;
    Experience experience;
    Education education;
    Copy copy;
    Fun fun;
};
}  // namespace Resume::Model
