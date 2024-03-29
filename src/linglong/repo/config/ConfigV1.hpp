// Thish file is generated by /tools/run-quicktype.sh
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     ConfigV1.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <nlohmann/json.hpp>
#include "linglong/repo/config/helper.hpp"

namespace linglong {
namespace repo {
namespace config {
/**
* Version 1 configuration file for local linglong repository.
*/

using nlohmann::json;

/**
* Version 1 configuration file for local linglong repository.
*/
struct ConfigV1 {
std::string defaultRepo;
std::map<std::string, std::string> repos;
int64_t version;
};
}
}
}

// clang-format on
