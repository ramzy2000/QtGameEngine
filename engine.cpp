#include "engine.h"
#include "system/System.h"

Engine::Engine() {}

// update the engine
void Engine::Update(entt::registry& registry, QOpenGLContext* context, float dt)
{
    InputSystem(registry, dt);
    RenderSystem(registry, context, dt);
}

// fixed update the engine
void Engine::FixedUpdate(entt::registry& registry, float dt)
{

}