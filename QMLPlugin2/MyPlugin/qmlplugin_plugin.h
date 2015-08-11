#ifndef QMLPLUGIN_PLUGIN_H
#define QMLPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class QMLPluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // QMLPLUGIN_PLUGIN_H

