#include "Node.h"

Node::Node(int in)
{
    left = nullptr;
    right = nullptr;
    data = in;
}

Node::Node() = default;

Node::~Node() = default;
