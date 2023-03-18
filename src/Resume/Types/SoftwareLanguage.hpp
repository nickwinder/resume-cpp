//
// Created by Nick Winder on 3/18/23.
//

#pragma once

#include "Resume/Types/String.hpp"
#include "Resume/Types/Map.hpp"

namespace Resume::Types {
enum class SoftwareLanguage {
    Cpp,
    CSharp,
    Java,
    Kotlin,
    JavaScript,
    TypeScript,
    Python,
    Ruby
};

static constexpr Map<SoftwareLanguage, StringView, 8> SoftwareLanguageToString {{
      {SoftwareLanguage::Cpp, "C++"},
      {SoftwareLanguage::CSharp, "C#"},
      {SoftwareLanguage::Java, "Java"},
      {SoftwareLanguage::Kotlin, "Kotlin"},
      {SoftwareLanguage::JavaScript, "JavaScript"},
      {SoftwareLanguage::TypeScript, "TypeScript"},
      {SoftwareLanguage::Python, "Python"},
      {SoftwareLanguage::Ruby, "Ruby"}
}};
}
