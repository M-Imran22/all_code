import 'package:flutter/material.dart';

class SecondScreen extends StatelessWidget {
  const SecondScreen({super.key});

  @override
  Widget build(BuildContext context) {
    final Map<String, String> args =
        ModalRoute.of(context)?.settings.arguments as Map<String, String>? ??
            {};

    return Scaffold(
      appBar: AppBar(
        title: const Text('Second Screen'),
      ),
      body: Padding(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          children: [
            Text('Name: ${args['name'] ?? 'No name'}'),
            Text('Email: ${args['email'] ?? 'No email'}'),
            const SizedBox(height: 16.0),
            Image.network('https://via.placeholder.com/150'),
            const SizedBox(height: 16.0),
            Expanded(
              child: ListView.builder(
                itemCount: 5,
                itemBuilder: (context, index) {
                  return ListTile(
                    leading: const Icon(Icons.person),
                    title: Text('Person ${index + 1}'),
                  );
                },
              ),
            ),
            ElevatedButton(
              child: const Text('Go to Animation'),
              onPressed: () {
                Navigator.pushNamed(context, '/animation');
              },
            ),
          ],
        ),
      ),
    );
  }
}
