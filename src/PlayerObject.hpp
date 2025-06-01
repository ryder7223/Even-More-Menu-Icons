#pragma once

using namespace geode::prelude;

#include <Geode/modify/PlayerObject.hpp>

#include "MenuGameLayer.hpp"

class $modify(ProPlayerObject, PlayerObject) {

    struct Fields {
        
        bool m_shouldKill = false;

        ProMenuGameLayer* m_menuGameLayer = nullptr;

    };

    void updateMenu(float, float, bool);

    void tryJump(bool);

    void reset(bool);

    void meetGrimReaper();
    
};