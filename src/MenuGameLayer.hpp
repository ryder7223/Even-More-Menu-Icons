#pragma once

using namespace geode::prelude;

#include <Geode/modify/MenuGameLayer.hpp>

// class ProPlayerObject;

class $modify(ProMenuGameLayer, MenuGameLayer) {

    struct Fields {
        std::vector<PlayerObject*> m_players;
        std::vector<PlayerObject*> m_deathRowPlayers;
        std::vector<PlayerObject*> m_reusablePlayers;

        int m_targetPlayers = 0;

        bool m_isEmpty = false;
    };

    void updateTargetPlayers();

    void playerKilledItself(PlayerObject*);

    void updatePlayers(float);

    bool ccTouchBegan(CCTouch*, CCEvent*);

    void tryJump(float);

    bool init();

    void update(float);

};