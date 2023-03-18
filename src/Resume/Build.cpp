//
// Created by Nick Winder on 3/18/23.
//

#include "Build.hpp"

namespace Resume {
using namespace std::literals;
using namespace std::chrono;
using namespace Resume::Types;

Model::Resume build() {
    return Model::Resume{
          .name = "Nicholas Winder",
          .title = "Software Engineer",
          .personalSummary = buildPersonalSummary(),
          .experience = buildExperience(),
          .education = buildEducation(),
          .copy = buildCopy(),
          .fun = buildFun()
    };
}

Model::PersonalSummary buildPersonalSummary() {
    return Model::PersonalSummary{
          .experienceStart = 2012y / October / 01,
          .focusLanguage = SoftwareLanguage::Cpp,
          .proficientLanguages = {SoftwareLanguage::Java, SoftwareLanguage::CSharp},
          .competentLanguages = {SoftwareLanguage::Kotlin, SoftwareLanguage::JavaScript, SoftwareLanguage::TypeScript,
                                 SoftwareLanguage::Python, SoftwareLanguage::Ruby},
          .tools = {Tool::GitHub, Tool::JetBrains, Tool::VisualStudio, Tool::Basecamp, Tool::Atlassian, Tool::Notion,
                    Tool::Buildkite, Tool::Jenkins, Tool::Terraform},
          .environments =
                {
                      Environment::Linux,
                      Environment::WebAssembly,
                      Environment::Android,
                      Environment::IOS,
                      Environment::MacOS,
                      Environment::Windows,
                },
          .headlines = {
                // clang-format off
                "Over 10 years of software development experience in three different industries.",
                "Experience in developing and releasing public SDK products for software developers, along with high-level documentation and guides.",
                "Competent with the Linux kernel and creating kernel modules. Using Docker to create reproducible build environments for CI.",
                "Extensive use of bug tracking, build servers, and version control/peer review software from Atlassian, Github, Jenkins and Buildkite.",
                "Developed and released 4 android applications to the play store, written in Java and Kotlin.",
                // clang-format on
          }};
}

Model::Experience buildExperience() {
    return Model::Experience {
        .jobs =
        { Model::Job{.companyName = "PSPDFKit",
                     .website = "https://pspdfkit.com",
                     .startDate = 2017y / October / 01,
                     .endDate = std::nullopt,
                     .location = "Remote (US/Austria)",
                     .position = "Senior Software Engineer",
                     .responsibility = "Developing PDF SDKs across multiple platforms",
                     .headlines = {"Working with extensively tested C++17 to fix and maintain core product."
                                   "Developing new features in a C++ core with an API exposed to iOS, Android, UWP, Web Assembly and Linux."
                                   "Created and released a new Server SDK for Java and .NET in 4 months."
                                   "Helped develop the UWP Windows SDK from an early stage in C# and C++/CLI."
                                   "Refactoring and modernizing the core build CMake build system."
                                   "Writing technical and non-technical blogs, guides, and API documentation."}},
          Model::Job{
                .companyName = "Music Group Research",
                .website = "https://www.midasconsoles.com/",
                .startDate = 2011y / September / 01,
                .endDate = 2015y / August / 01,
                .location = "Manchester, UK",
                .position = "Embedded engineer/Software Engineer",
                .responsibility = "Creating products for the professional audio industry.",
               // clang-format off
                .headlines = {"Introduced a new buildroot environment used in 4 products."
                              "Developed std11 compatible C++ libraries used across multiple architectures."
                              "Debugged multi threaded applications on remote targets (gdb)."
                              "Managed a team of 3 to develop a releasable product."
                              "Advised and debugged initial PCB design for 4 different products. Seeing the boards from embedded bring up to bootable version of Linux."
                              "Bug fix and maintenance work with current product range."
                              "Released a ecos based product within the first 6 months of working at the company."}},
                // clang-format on
          Model::Job{.companyName = "Peak Communications",
                     .website = "https://peakcom.co.uk/",
                     .startDate = 2008y / May / 01,
                     .endDate = 2009y / May / 01,
                     .location = "Brighouse, UK",
                     .position = "Embedded Engineer",
                     .responsibility = "Satellite frequency converters.",
                        // clang-format off
                     .headlines = {
                           "Developed bespoke customer designs based on a 8051 architecture in a software team of 2."
                           "Developed a microprocessor module to control a redundant switch over system. All schematic creation, PCB layout and programming done only by myself within 6 months"}},

                        // clang-format on
          Model::Job{.companyName = "NFX Development",
                     .website = "https://nickwinder.com/",
                     .startDate = 2009y / September / 01,
                     .endDate = std::nullopt,
                     .location = "Remote",
                     .position = "Software Engineer",
                     .responsibility = "NFX development is a personal project which brings audio/engineering applications to the world of phones and tablets.",
                     .headlines = {
                           "30,000 current users over 4 applications and over 150,000 installs in total."
                           "2 applications with an average rating of 4.17 out of 5 on the google play store."
                           "Experience with the Android SDK, Java and android development tools."
                           "Android USB implementation to interface with an external pcb"}},
          Model::Job{.companyName = "HPE Contract",
                     .website = "",
                     .startDate = 2009y / January / 01,
                     .endDate = std::nullopt,
                     .location = "Remote Contract",
                     .position = "Software Engineer",
                     .responsibility = "Industrial Leak Detection.",
                     .headlines = {
                           "Signal analysis of USB ultrasound microphone data performed in app"
                           "Locally stored database synced with a server via a REST API"
                           "Implementation of user input forms for database editing"
                           "Full creative flexibility to implement extensive use of Material Design"}}}
    };
}

Model::Education buildEducation() {
    return Model::Education{
        .degrees = {
            Model::Degree{
                  .university = "University of Huddersfield, UK",
                  .title = "Bachelor’s Degree in Electronics",
                  .startDate = 2006y/September/01,
                  .endDate = 2010y/March/01,
                  .result = "First-Class Honours",
                  .modules = {
                        "Enterprise 1 - 78% (A)"
                        "Electronics 2 - 76% (A)"
                        "Signal Analysis and Control - 62% (B)"
                        "Embedded Systems - 85% (A)"
                        "Communications - 71% (B)",
                        "Individual Project (DSP Audio Acoustics) 85% (A)"
                        "DSP Applications - 77% (A)"
                        "Analogue Systems Integration - 79% (A)"
                        "Digital Systems Integration - 78% (A)"
                        "Communication Systems - 77% (A)"
                  }
            }
        }
    };
}

Model::Copy buildCopy() {
    return Model::Copy{
        .blogPosts = {
              "https://pspdfkit.com/blog/2021/tackling-pdf-performance-issues/",
              "https://pspdfkit.com/blog/2019/the-functional-side-of-optional/",
              "https://pspdfkit.com/blog/2021/cmake-presets-in-practice/",
              "https://pspdfkit.com/blog/2021/stop-wasting-bandwidth-with-pdfs/",
              "https://pspdfkit.com/blog/2019/eight-hours-work/",
              "https://pspdfkit.com/blog/2019/eight-hours-recreation/",
              "https://pspdfkit.com/blog/2019/eight-hours-sleep/"
        },
        .websites = {
              "https://barefootrunreview.com",
              "https://illnesstoultra.com",
        },
    };
}

Model::Fun buildFun() {
    return Model::Fun{
          .activities {
                Model::Activity{
                      .name = "running",
                      .highlight = "Running 500 miles across Colorado in 16 days",
                      .reference = "https://illnesstoultra.com",
                },
                Model::Activity{
                      .name = "Barefoot Shoes",
                      .highlight = "I run a successful barefoot running shoe review site.",
                      .reference = "https://barefootrunreview.com",
                },
                Model::Activity{
                      .name = "Cycling",
                      .highlight = "I've cycled 3000km from Norway to Latvia in 1 push.",
                      .reference = "https://github.com/nickwinder/nfx-cycle",
                }
          }
    };
}
}  // namespace Resume
