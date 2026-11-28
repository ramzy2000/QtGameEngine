#include "System.h"
#include <QOpenGLFunctions>

void InputSystem(entt::registry& registry, float dt)
{

}

void RenderSystem(entt::registry& registry, QOpenGLContext* context, float dt)
{
    QOpenGLFunctions* f = context->functions();

    f->glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}