import 'package:flutter/material.dart';
import 'home_screen.dart';
import 'second_screen.dart';
import 'animation_screen.dart';

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      initialRoute: '/',
      routes: {
        '/': (context) => HomeScreen(),
        '/second': (context) => const SecondScreen(),
        '/animation': (context) => const AnimationScreen(),
      },
    );
  }
}
