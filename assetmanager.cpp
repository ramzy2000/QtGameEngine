#include "assetmanager.h"
#include <QOpenGLShader>

AssetManager::AssetManager() {}

AssetManager* AssetManager::instance()
{
    if(!_instance)
    {
        _instance = new AssetManager();
    }
    return _instance;
}

// load a shader
void AssetManager::LoadShader(QString vertexShaderPath, QString fragmentShaderPath, QString name)
{
    // check if shader is alredy named
    if(_shaders.contains(name))
    {
        return;
    }

    // compile vertex shader
    QOpenGLShader vertexShader(QOpenGLShader::Vertex);
    vertexShader.compileSourceFile(vertexShaderPath);

    // compile fragment shader
    QOpenGLShader fragmentShader(QOpenGLShader::Fragment);
    vertexShader.compileSourceFile(fragmentShaderPath);


    // load shader
    QOpenGLShaderProgram* program = new QOpenGLShaderProgram();
    program->addShader(&vertexShader);
    program->addShader(&fragmentShader);

    // add new shader to storeage map
    _shaders[name] = program;
}

// get a shader
QOpenGLShaderProgram* AssetManager::GetShader(QString name)
{
    return _shaders[name];
}

AssetManager* AssetManager::_instance = nullptr;