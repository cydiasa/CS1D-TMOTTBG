import QtQuick 1.1

ListView {
    width: 100; height: 100
    anchors.fill: parent

    model: myModel
    delegate: Rectangle {
        id: delegateItem
        width: parent.width; height: 100
        color:  "blue"
        Rectangle {
            color: "white"
            height: parent.height; width: 100
            anchors.left: parent.left
            Text {
                id: name
                text: qsTr("Click")
            }
         }
        Text {
            id: itexItem
            anchors.left: imageItem.right
            anchors.leftMargin: 20
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 40
            // deligate can direclty use ListElement role name
            text: imageName
        }
    }
}
