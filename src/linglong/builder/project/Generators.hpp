// Thish file is generated by /tools/run-quicktype.sh
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     Generators.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "linglong/builder/project/helper.hpp"

#include "linglong/builder/project/Project.hpp"
#include "linglong/builder/project/Source.hpp"
#include "linglong/builder/project/Runtime.hpp"
#include "linglong/builder/project/Package.hpp"
#include "linglong/builder/project/Depend.hpp"
#include "linglong/builder/project/Build.hpp"
#include "linglong/builder/project/Manual.hpp"
#include "linglong/builder/project/Base.hpp"

namespace linglong {
namespace builder {
namespace project {
void from_json(const json & j, Base & x);
void to_json(json & j, const Base & x);

void from_json(const json & j, Manual & x);
void to_json(json & j, const Manual & x);

void from_json(const json & j, Build & x);
void to_json(json & j, const Build & x);

void from_json(const json & j, Depend & x);
void to_json(json & j, const Depend & x);

void from_json(const json & j, Package & x);
void to_json(json & j, const Package & x);

void from_json(const json & j, Runtime & x);
void to_json(json & j, const Runtime & x);

void from_json(const json & j, Source & x);
void to_json(json & j, const Source & x);

void from_json(const json & j, Project & x);
void to_json(json & j, const Project & x);

inline void from_json(const json & j, Base& x) {
x.id = j.at("id").get<std::string>();
x.version = get_stack_optional<std::string>(j, "version");
}

inline void to_json(json & j, const Base & x) {
j = json::object();
j["id"] = x.id;
if (x.version) {
j["version"] = x.version;
}
}

inline void from_json(const json & j, Manual& x) {
x.build = get_stack_optional<std::string>(j, "build");
x.configure = get_stack_optional<std::string>(j, "configure");
x.install = get_stack_optional<std::string>(j, "install");
}

inline void to_json(json & j, const Manual & x) {
j = json::object();
if (x.build) {
j["build"] = x.build;
}
if (x.configure) {
j["configure"] = x.configure;
}
if (x.install) {
j["install"] = x.install;
}
}

inline void from_json(const json & j, Build& x) {
x.kind = j.at("kind").get<std::string>();
x.manual = get_stack_optional<Manual>(j, "manual");
}

inline void to_json(json & j, const Build & x) {
j = json::object();
j["kind"] = x.kind;
if (x.manual) {
j["manual"] = x.manual;
}
}

inline void from_json(const json & j, Depend& x) {
x.id = j.at("id").get<std::string>();
x.type = get_stack_optional<std::string>(j, "type");
x.version = get_stack_optional<std::string>(j, "version");
}

inline void to_json(json & j, const Depend & x) {
j = json::object();
j["id"] = x.id;
if (x.type) {
j["type"] = x.type;
}
if (x.version) {
j["version"] = x.version;
}
}

inline void from_json(const json & j, Package& x) {
x.description = j.at("description").get<std::string>();
x.id = j.at("id").get<std::string>();
x.kind = j.at("kind").get<std::string>();
x.name = j.at("name").get<std::string>();
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const Package & x) {
j = json::object();
j["description"] = x.description;
j["id"] = x.id;
j["kind"] = x.kind;
j["name"] = x.name;
j["version"] = x.version;
}

inline void from_json(const json & j, Runtime& x) {
x.id = j.at("id").get<std::string>();
x.version = get_stack_optional<std::string>(j, "version");
}

inline void to_json(json & j, const Runtime & x) {
j = json::object();
j["id"] = x.id;
if (x.version) {
j["version"] = x.version;
}
}

inline void from_json(const json & j, Source& x) {
x.commit = get_stack_optional<std::string>(j, "commit");
x.digest = get_stack_optional<std::string>(j, "digest");
x.kind = j.at("kind").get<std::string>();
x.patch = get_stack_optional<std::vector<std::string>>(j, "patch");
x.url = get_stack_optional<std::string>(j, "url");
x.version = get_stack_optional<std::string>(j, "version");
}

inline void to_json(json & j, const Source & x) {
j = json::object();
if (x.commit) {
j["commit"] = x.commit;
}
if (x.digest) {
j["digest"] = x.digest;
}
j["kind"] = x.kind;
if (x.patch) {
j["patch"] = x.patch;
}
if (x.url) {
j["url"] = x.url;
}
if (x.version) {
j["version"] = x.version;
}
}

inline void from_json(const json & j, Project& x) {
x.base = get_stack_optional<Base>(j, "base");
x.build = j.at("build").get<Build>();
x.depends = get_stack_optional<std::vector<Depend>>(j, "depends");
x.environment = get_stack_optional<std::map<std::string, std::string>>(j, "environment");
x.package = j.at("package").get<Package>();
x.runtime = get_stack_optional<Runtime>(j, "runtime");
x.source = j.at("source").get<Source>();
x.variables = get_stack_optional<std::map<std::string, std::string>>(j, "variables");
x.version = j.at("version").get<std::string>();
}

inline void to_json(json & j, const Project & x) {
j = json::object();
if (x.base) {
j["base"] = x.base;
}
j["build"] = x.build;
if (x.depends) {
j["depends"] = x.depends;
}
if (x.environment) {
j["environment"] = x.environment;
}
j["package"] = x.package;
if (x.runtime) {
j["runtime"] = x.runtime;
}
j["source"] = x.source;
if (x.variables) {
j["variables"] = x.variables;
}
j["version"] = x.version;
}
}
}
}

// clang-format on
