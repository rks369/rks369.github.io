import 'package:flutter/material.dart';

void main() {
  runApp(contact());
}

class contact extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          elevation: 0,
          title: Text(
            "Contact Us",
            style: TextStyle(color: Colors.blueAccent),
          ),
          backgroundColor: Colors.white,
        ),
        body: Column(
          children: [Image(image: img / contact.jpg)],
        ),
      ),
    );
  }
}
