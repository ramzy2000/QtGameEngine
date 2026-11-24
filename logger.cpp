#include "logger.h"
#include "loggerwidget.h"

Logger::Logger() {}

Logger* Logger::_instance = nullptr;

Logger* Logger::instance()
{
    if(!_instance)
    {
        _instance = new Logger();
    }
    return _instance;
}

void Logger::LogMessage(QString message)
{
    // capture the current log widget
    LoggerWidget::instance()->append(message);

    // post the message to it
}