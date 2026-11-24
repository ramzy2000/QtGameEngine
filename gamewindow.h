#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QObject>
#include <QOpenGLWidget>
#include <QWidget>
#include <QOpenGLFunctions>

class GameWindow : public QOpenGLWidget
{
    Q_OBJECT
public:
    GameWindow(QWidget *parent = nullptr);

    void initializeGL() override;

    void resizeGL(int w, int h) override;

    void paintGL() override;
};

#endif // GAMEWINDOW_H
