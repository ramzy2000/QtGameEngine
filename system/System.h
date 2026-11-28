#ifndef SYSTEM_H
#define SYSTEM_H

#include <entt/entt.hpp>
#include <QOpenGLContext>

void InputSystem(entt::registry& registry, float dt);

void RenderSystem(entt::registry& registry, QOpenGLContext* context, float dt);

#endif // SYSTEM_H
