#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#include "scene/Scene.h"

class SceneManager
{
private:
    SceneManager();
    Scene* _currentScene = nullptr;
    static SceneManager* _instance;
    void LoadScene(Scene* scene);
public:
    static SceneManager* instance();
};

#endif // SCENEMANAGER_H
