#include "ExcellentState.h"

std::string ExcellentState::morning_greet() {
    return "おっはよー";
}

std::string ExcellentState::get_protection_for_cold() {
    return "羽毛布団";
}

std::string ExcellentState::happy() {
    return "とっても幸せ！";
}

ExcellentState::ExcellentState() : State("ExcellentState"){
}
