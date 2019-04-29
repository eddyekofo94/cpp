#pragma once

class Node
{
public:
  int data;    // data defined
  Node *left;  // left node
  Node *right; // right node

  explicit Node(int in); // Constructor with data

  Node(); // Default Constructor

  ~Node(); // Destructor
};