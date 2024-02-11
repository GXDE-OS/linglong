// Thish file is generated by /tools/run-quicktype.sh
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Config.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <nlohmann/json.hpp>
#include "linglong/builder/config/helper.hpp"

namespace linglong {
namespace builder {
namespace config {
/**
* Configuration file for ll-builder.
*/

using nlohmann::json;

/**
* Configuration file for ll-builder.
*/
struct Config {
std::string remoteRepoEndpoint;
std::string remoteRepoName;
};
}
}
}

// clang-format on
