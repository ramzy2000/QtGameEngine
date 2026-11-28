#ifndef ENGINE_H
#define ENGINE_H

#include <entt/entt.hpp>
#include <QOpenGLContext>

class Engine
{
public:
    Engine();

    // update the engine
    void Update(entt::registry& registry, QOpenGLContext* context, float dt);

    // fixed update the engine
    void FixedUpdate(entt::registry& registry, float dt);
};

#endif // ENGINE_H
