#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <QString>
#include <QMap>
#include <QOpenGLShaderProgram>

class AssetManager
{
private:
    AssetManager();
    static AssetManager* _instance;
    QMap<QString, QOpenGLShaderProgram*> _shaders;

public:
    static AssetManager* instance();

    // load a shader
    void LoadShader(QString vertexShaderPath, QString fragmentShaderPath, QString name);

    // get a shader
    QOpenGLShaderProgram* GetShader(QString name);
};

#endif // ASSETMANAGER_H
