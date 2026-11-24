#ifndef SCENE_H
#define SCENE_H

#include <entt/entt.hpp>

class BasicScene
{
public:
    virtual void Enter(entt::registry& registry) = 0;

    virtual void Exit(entt::registry& registry) = 0;
};

class Scene : public BasicScene
{
public:
    virtual void Enter(entt::registry& registry) override
    {

    }

    virtual void Exit(entt::registry& registry) override
    {

    }
};

#endif // SCENE_H
