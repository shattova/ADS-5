// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>

template<typename T, int size>
class TStack {
 private:
    T arr[size] = {0};
    int a;

 public:
    TStack() {
        a = -1;
    }
    T get() const {
        return arr[a];
    }
    T pop() {
        return arr[a--];
    }
    int pri() const {
        return a;
    }
    bool isEmpty() const {
        return a == -1;
    }
    bool isFull() const {
        return a == size;
    }
    void push(const T& value) {
        if (isFull()) {
            throw std::string(" empty");
        } else {
            arr[++a] = value;
        }
    }
};

#endif  // INCLUDE_TSTACK_H_
