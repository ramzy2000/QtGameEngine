#include "loggerwidget.h"

LoggerWidget::LoggerWidget(QWidget* parent) : QTextEdit(parent)
{
    this->setReadOnly(true);
    if(!_instance)
    {
        _instance = this;
    }
}

LoggerWidget* LoggerWidget::instance()
{
    return _instance;
}

LoggerWidget* LoggerWidget::_instance = nullptr;
