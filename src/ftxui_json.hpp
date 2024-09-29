// Copyright 2022 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.
#ifndef JSON_TUI_MAIN_UI_HPP
#define JSON_TUI_MAIN_UI_HPP

#include <nlohmann/json.hpp>
#include <ftxui/component/component.hpp>
#include "expander.hpp"

namespace ftxui_json {
	ftxui::Component From(const nlohmann::json& json, bool is_last, int depth, Expander& expander);
};


#include "ftxui_json.сpp"

#endif /* json_tui_main_ui_hpp */
