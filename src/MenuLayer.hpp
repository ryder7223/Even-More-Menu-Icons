#pragma once

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>

class $modify(ProMenuLayer, MenuLayer) {

    void onSlider(CCObject*);

    bool init();

};