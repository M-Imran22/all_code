import 'package:flutter/material.dart';
import 'package:test12/homeScreen.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return  MaterialApp(
      title:'Book Reader App',
      initialRoute: '/',
      routes: {
        '/':(context)=> const home_screen()
      },
    );
  }
}
