cmake_minimum_required(VERSION 3.22)
project(resume)

add_executable(resume main.cpp
        src/Resume/Model/Resume.hpp
        src/Resume/Model/PersonalSummary.hpp
        src/Resume/Types/Date.hpp
        src/Resume/Types/String.hpp
        src/Resume/Types/SoftwareLanguage.hpp
        src/Resume/Types/Map.hpp
        src/Resume/Types/Tools.hpp
        src/Resume/Types/Environments.hpp
        src/Resume/Model/Experience.hpp
        src/Resume/Model/Job.hpp
        src/Resume/Model/Copy.hpp
        src/Resume/Model/Education.hpp
        src/Resume/Model/Degree.hpp
        src/Resume/Model/Fun.hpp
        src/Resume/Model/Activity.hpp
        src/Resume/Build.cpp
        src/Resume/Build.hpp)
set_property(TARGET resume PROPERTY CXX_STANDARD 20)

target_include_directories(resume PRIVATE src)
