//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/String.hpp"
#include "Resume/Types/Map.hpp"

namespace Resume::Types {
enum class Tool {
    Atlassian,
    GitHub,
    JetBrains,
    VisualStudio,
    Notion,
    Basecamp,
    Buildkite,
    Jenkins,
    Terraform
};

static constexpr Map<Tool, StringView, 9> ToolToString {{
      {Tool::Atlassian, "Atlassian"},
      {Tool::GitHub, "GitHub"},
      {Tool::JetBrains, "JetBrains IDEs"},
      {Tool::VisualStudio, "VisualStudio"},
      {Tool::Notion, "Notion"},
      {Tool::Basecamp, "Basecamp"},
      {Tool::Buildkite, "Buildkite"},
      {Tool::Jenkins, "Jenkins"},
      {Tool::Terraform, "Terraform"}
}};
using Tools = std::vector<Tool>;
}
