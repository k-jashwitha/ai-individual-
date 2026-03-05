AI Programs in C
This repository contains simple implementations of Artificial Intelligence concepts using the C programming language. The programs demonstrate the Turing Test concept, CAPTCHA verification, and search algorithms (BFS and DFS).
1. Simple Turing Test Chatbot
Description:
This program simulates a basic chatbot based on the idea of the Turing Test, which checks whether a machine can behave like a human in conversation.
The chatbot reads user input and responds to certain keywords.
Features:
Console based chatbot
Recognizes simple inputs like hello, hi, name, weather
Runs until the user types exit
Example
Ask something: hello
AI: Hello! Nice to talk with you.
Ask something: exit
AI: Goodbye!
2. CAPTCHA Verification System
Description:
This program implements a simple CAPTCHA system used to verify whether the user is human.
A random 5-character CAPTCHA containing letters and numbers is generated. The user must enter it correctly.
Features:
Random CAPTCHA generation
Combination of letters and digits
Maximum 3 attempts
Example:
Generated CAPTCHA: A7K2P
Enter the CAPTCHA: A7K2P
Access Granted! You are verified as human.
3. BFS and DFS – Missionaries and Cannibals Problem
Description:
This program solves the Missionaries and Cannibals problem using Breadth First Search (BFS) and Depth First Search (DFS).
Problem:
3 missionaries and 3 cannibals must cross a river.
Boat can carry maximum 2 people.
Cannibals must never outnumber missionaries.
State Representation
(m, c, boat)
m → missionaries on left bank
c → cannibals on left bank
boat → boat position (1 = left, 0 = right)
Output:
The program prints:
Solution path for BFS
Number of nodes explored by BFS and DFS
Example:
Missionaries and Cannibals Problem
BFS Solution Path:
(3,3,1)
(3,1,0)
...
Performance Comparison
BFS nodes explored: 20
DFS nodes explored: 35
