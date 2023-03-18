//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Model/Resume.hpp"

namespace Resume {
Model::Resume build();
Model::PersonalSummary buildPersonalSummary();
Model::Experience buildExperience();
Model::Education buildEducation();
Model::Copy buildCopy();
Model::Fun buildFun();
}
