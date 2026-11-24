#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QObject>
#include <QOpenGLWidget>
#include <QWidget>
#include <QOpenGLFunctions>
#include <entt/entt.hpp>
#include <QElapsedTimer>
#include "engine.h"

class GameWindow : public QOpenGLWidget
{
    Q_OBJECT
public:
    GameWindow(QWidget *parent = nullptr);

    QElapsedTimer timer;
    qint64 lastFrameTime;

    Engine engine;

    void initializeGL() override;

    void resizeGL(int w, int h) override;

    void paintGL() override;
};

#endif // GAMEWINDOW_H
