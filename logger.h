#ifndef LOGGER_H
#define LOGGER_H
#include <QString>
class Logger
{
private:
    Logger();
    static Logger* _instance;
public:
    static Logger* instance();

    // log a message to the log widget
    void LogMessage(QString message);
};

#endif // LOGGER_H
