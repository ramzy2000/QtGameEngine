#include "scenemanager.h"
#include "entitymanager.h"

SceneManager::SceneManager() {}

SceneManager* SceneManager::_instance = nullptr;

void SceneManager::LoadScene(Scene* scene)
{
    entt::registry& registry = EntityManager::instance()->registry();

    if(!_currentScene)
    {
        _currentScene = scene;
        _currentScene->Enter(registry);
        return;
    }

    // start load screen

    // unload current scene
    _currentScene->Exit(registry);
    // load new scene
    _currentScene->Enter(registry);

    // end load screen and display new scene
}

SceneManager* SceneManager::instance()
{
    if(!_instance)
    {
        _instance = new SceneManager();
    }
    return _instance;
}