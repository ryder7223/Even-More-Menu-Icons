#include "GameStatsManager.hpp"

void ProGameStatsManager::incrementStat(const char* p0, int p1) {
    if (!m_fields->m_dontIncrement)
        GameStatsManager::incrementStat(p0, p1);
}