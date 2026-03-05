AI Programs in Python:
This repository contains simple implementations of basic Artificial Intelligence concepts using the Python programming language. The programs demonstrate the Turing Test concept, CAPTCHA verification, and search algorithms such as Breadth First Search (BFS) and Depth First Search (DFS).

Programs Included:
1. Simple Turing Test Chatbot
2. CAPTCHA Verification System
3. BFS and DFS – Missionaries and Cannibals Problem

1. Simple Turing Test Chatbot
Description:
This program simulates a basic chatbot based on the idea of the Turing Test, which checks whether a machine can behave like a human in conversation. The chatbot reads user input and responds to certain keywords.
Features:
* Console based chatbot
* Recognizes simple inputs like **hello, hi, name, weather**
* Runs continuously until the user types "exit"
 Example:

Simple Turing Test Chatbot
Ask something: hello
AI: Hello! Nice to talk with you.

Ask something: exit
AI: Goodbye!

2. CAPTCHA Verification System
Description:
This program implements a simple CAPTCHA system used to verify whether the user is human. A random 5-character CAPTCHA containing letters and numbers is generated. The user must enter the correct CAPTCHA to gain access.
Features:
* Random CAPTCHA generation
* Combination of letters and digits
* Maximum of 3 attempts allowed
Example:


Generated CAPTCHA: A7K2P
Enter the CAPTCHA: A7K2P
Access Granted! You are verified as human

3. BFS and DFS – Missionaries and Cannibals Problem
Description:
This program solves the **Missionaries and Cannibals problem** using two uninformed search algorithms: Breadth First Search (BFS) and Depth First Search (DFS).
Problem Statement:
* There are **3 missionaries and 3 cannibals** on one side of a river.
* A boat can carry **at most 2 people**.
* Cannibals must **never outnumber missionaries** on either side.
State Representation:
Each state is represented as:

(m, c, boat)

Where:
* m→ number of missionaries on the left bank
* c→ number of cannibals on the left bank
* boat → boat position

  * 1 = left bank
  * 0 = right bank

Output:

The program prints:

* The solution path using BFS
* The number of nodes explored by BFS and DFS
* A performance comparison of both algorithms

Example:

Missionaries and Cannibals Problem

BFS Solution Path:
(3,3,1)
(3,1,0)
...

Performance Comparison
BFS nodes explored: 20
DFS

