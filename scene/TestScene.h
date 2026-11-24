#ifndef TESTSCENE_H
#define TESTSCENE_H
#include "Scene.h"

class TestScene : public Scene
{
public:
    TestScene();

    virtual void Enter(entt::registry& registry) override;
};

#endif // TESTSCENE_H
