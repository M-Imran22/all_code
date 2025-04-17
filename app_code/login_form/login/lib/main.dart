import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.white,
        body: Column(
          children: [
            const SizedBox(
              height: 20,
            ),
            const Row(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
                Image(
                  image: AssetImage("images/logo.png"),
                  width: 50,
                  height: 50,
                ),
                SizedBox(
                  width: 8,
                ),
                Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      "GDC Lahor",
                      style: TextStyle(
                          fontSize: 20,
                          fontFamily: "Rubik",
                          color: Color(0xff4C5980)),
                    ),
                    Text(
                      "Swabi",
                      style: TextStyle(
                          fontSize: 20,
                          fontFamily: "Rubik",
                          color: Color(0xffF9703B)),
                    ),
                  ],
                ),
              ],
            ),
            const SizedBox(
              height: 20,
            ),
            const Center(
              child: Text(
                "Login",
                style: TextStyle(
                    fontSize: 24,
                    fontFamily: "Rubik",
                    color: Color(0xff2D3142)),
              ),
            ),
            const SizedBox(
              height: 24,
            ),
            const Center(
                child: Text(
              "Please enter your login informataion \n to access all features. ",
              textAlign: TextAlign.center,
              style: TextStyle(
                  fontSize: 16, fontFamily: "Rubik", color: Color(0xff4C5980)),
            )),
            const SizedBox(
              height: 50,
            ),
            Padding(
              padding: const EdgeInsets.all(20.0),
              child: TextFormField(
                decoration: const InputDecoration(
                    hintText: "Email",
                    fillColor: Color(0xffF8F9FA),
                    filled: true),
              ),
            ),
            Center(
              child: Container(
                width: 300,
                height: 50,
                decoration: BoxDecoration(
                  borderRadius: BorderRadius.circular(10),
                  color: const Color(0xffF9703B),
                ),
                child: const Center(
                  child: Text(
                    "Login",
                    style: TextStyle(
                        fontFamily: "Rubik", fontSize: 16, color: Colors.white),
                  ),
                ),
              ),
            ),
            const SizedBox(
              height: 20,
            ),
            const Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Text(
                  "Don't have an account ?",
                  style: TextStyle(
                    fontSize: 16,
                    fontFamily: "Rubik",
                  ),
                ),
                SizedBox(
                  width: 5,
                ),
                Text(
                  "Sign up",
                  style: TextStyle(
                      fontFamily: "Rubik",
                      fontSize: 16,
                      color: Color(0xffF9703B)),
                )
              ],
            ),
          ],
        ),
      ),
    );
  }
}
