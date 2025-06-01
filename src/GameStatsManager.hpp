#pragma once

using namespace geode::prelude;

#include <Geode/modify/GameStatsManager.hpp>

class $modify(ProGameStatsManager, GameStatsManager) {
    
    struct Fields {
        bool m_dontIncrement = false;
    };

    void incrementStat(char const*, int);

};