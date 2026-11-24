#include "entitymanager.h"

EntityManager::EntityManager() {}

EntityManager* EntityManager::_instance = nullptr;

entt::registry& EntityManager::registry()
{
    return _registry;
}

EntityManager* EntityManager::instance()
{
    if(!_instance)
    {
        _instance = new EntityManager();
    }
    return _instance;
}