import QtQuick 2.4
import QtQuick.Window 2.2
import MyPlugin 1.0

Window {
    visible: true

    MyItem{
        anchors.centerIn: parent
        MyRect{
            width: 100
            height: 100
        }
    }

}
