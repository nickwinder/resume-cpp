//
// Created by Nick Winder on 3/18/23.
//

#pragma once


#include "Resume/Types/String.hpp"
#include "Resume/Types/Map.hpp"

namespace Resume::Types {
enum class Environment {
    Linux,
    Android,
    Windows,
    WebAssembly,
    MacOS,
    IOS
};

static constexpr Map<Environment, StringView, 6> EnvironmentToString {{
      {Environment::Linux, "Linux"},
      {Environment::Android, "Android"},
      {Environment::Windows, "Windows"},
      {Environment::WebAssembly, "WebAssembly"},
      {Environment::MacOS, "MacOS"},
      {Environment::IOS, "IOS"}
}};

using Environments = std::vector<Environment>;
}
