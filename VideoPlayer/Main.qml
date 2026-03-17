import QtQuick
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Video Player"

    Column {
        anchors.fill: parent
        spacing: 10
        padding: 10

        Rectangle {
            width: parent.width
            height: 300
            color: "black"
            radius: 5
        }

        Row {
            spacing: 15
            anchors.horizontalCenter: parent.horizontalCenter

            Button { text: "▶️" }
            Button { text: "⏸️" }
            Button { text: "⏹" }
            Button { text: "⏪" }
            Button { text: "⏩" }
        }

        ProgressBar {
            width: parent.width * 0.9
            anchors.horizontalCenter: parent.horizontalCenter
            value: 0.3
        }
    }
}
