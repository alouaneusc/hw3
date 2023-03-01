#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>
using namespace std;

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : public vector<T>  {

public:
    Stack();
    // ~Stack();
    bool empty() const;
    size_t size() const;
    void push(const T& item);
    void pop();  // throws std::underflow_error if empty
    const T& top() const; // throws std::underflow_error if empty
    // Add other members only if necessary
    std::vector<T> vec;
    // int t;
};

template <typename T>
Stack<T>::Stack() {}

template <typename T>
bool Stack<T>::empty() const {
    if (vec.size() == 0) return true;
    return false;
}

template <typename T>
size_t Stack<T>::size() const { return vec.size(); }

template <typename T>
void Stack<T>::push(const T& item) { vec.push_back(item); }

template <typename T> 
void Stack<T>::pop() {
    if (empty()) throw std::underflow_error ("Is Empty");
    vec.pop_back();

}

template <typename T>
const T& Stack<T>::top() const {
    if (empty()) throw std::underflow_error("Is Empty");
    return vec.back();

}


#endif