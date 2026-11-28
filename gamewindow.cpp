#include "gamewindow.h"
#include "logger.h"
#include "entitymanager.h"

GameWindow::GameWindow(QWidget *parent) : QOpenGLWidget(parent)
{}

void GameWindow::initializeGL()
{
    // Set up the rendering context, load shaders and other resources, etc.:
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    f->glClearColor(0.5f, 1.0f, 1.0f, 1.0f);

    //...
    Logger::instance()->LogMessage("Game Started");
}

void GameWindow::resizeGL(int w, int h)
{
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    f->glViewport(0, 0, w, h);


    // Update projection matrix and other size related settings:
    //m_projection.setToIdentity();
    //m_projection.perspective(45.0f, w / float(h), 0.01f, 100.0f);
    //...
}

void GameWindow::paintGL()
{
    // Draw the scene:
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();

    // Calculate delta time in seconds
    qint64 now = timer.elapsed();
    float dt = (now - lastFrameTime) / 1000.0f; // ms → seconds
    lastFrameTime = now;

    entt::registry& registry = EntityManager::instance()->registry();

    if(accumulator >= 1 / 60)
    {
        engine.FixedUpdate(registry, dt);
        accumulator = 0.0f;
    }
    else
    {
        accumulator += dt;
    }

    engine.Update(registry, this->context(), dt);
}