// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>

template<typename T, int size>
class TStack {
private:
    type arr[size] = { 0 };
    int top;
public:
    TStack() :top(-1) { }
    type get() const {
        return arr[top];
    }
    type pop() {
        return arr[top--];
    }
    int pri() const {
        return top;
    }
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top == size;
    }
    void push(const T& value) {
        if (isFull()) {
            throw std::string(" empty");
        }
        else {
            arr[++top] = value;
        }
    }
};

#endif  // INCLUDE_TSTACK_H_
