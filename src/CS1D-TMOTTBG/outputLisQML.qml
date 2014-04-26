import QtQuick 1.1

Rectangle {
      width: 200; height: 200

     Component {
         id: fruitDelegate
         Row {
                 id: fruit
                 Text { text: " Fruit: " + name; color: fruit.ListView.view.fruit_color }
                 Text { text: " Cost: $" + cost }
                 Text { text: " Language: " + fruit.ListView.view.model.language }
         }
     }

     ListView {
         property color fruit_color: "green"
         model: fruitModel
         delegate: fruitDelegate
         anchors.fill: parent
     }
 }
