#pragma once

#include "../base/Macros.hpp"
#include "Result.hpp"
#include <string>
#include <vector>
#include <functional>
#include <fs/filesystem.hpp>

namespace geode::utils::clipboard {
    GEODE_DLL bool write(std::string const& data);
    GEODE_DLL std::string read();
}

namespace geode::utils::dirs {
    GEODE_DLL ghc::filesystem::path geode_root();
}