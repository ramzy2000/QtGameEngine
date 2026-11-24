#ifndef LOGGERWIDGET_H
#define LOGGERWIDGET_H

#include <QObject>
#include <QTextEdit>
#include <QWidget>

class LoggerWidget : public QTextEdit
{
    Q_OBJECT
public:
    LoggerWidget(QWidget* parent = nullptr);

    static LoggerWidget* instance();
private:
    static LoggerWidget* _instance;
};

#endif // LOGGERWIDGET_H
