#include "MenuLayer.hpp"
#include "MenuGameLayer.hpp"

void ProMenuLayer::onSlider(CCObject* sender) {
    SliderThumb* slider = static_cast<SliderThumb*>(sender);

    int value = static_cast<int>(slider->getValue() * 100.f);
    Mod::get()->setSettingValue("icons", value);

    static_cast<ProMenuGameLayer*>(m_menuGameLayer)->updateTargetPlayers();
}

bool ProMenuLayer::init() {
    if (!MenuLayer::init()) return false;

    if (Mod::get()->getSettingValue<bool>("hide-slider")) return true;

    Slider* slider = Slider::create(this, menu_selector(ProMenuLayer::onSlider));
    slider->setScale(0.525f);
    slider->setContentSize({0, 0});
    slider->setPosition(getContentSize() - ccp(63, 9));
    slider->setID("icons-slider"_spr);

    addChild(slider);
    
    CCLabelBMFont* lbl = CCLabelBMFont::create("Menu Icons", "goldFont.fnt");
    lbl->setScale(0.425f);
    lbl->setPosition(getContentSize() - ccp(63, 20));
    lbl->setID("icons-label"_spr);
    
    addChild(lbl);

    int icons = Mod::get()->getSettingValue<int64_t>("icons");
    slider->setValue(std::clamp(icons, 0, 100) / 100.f);

    return true;
};