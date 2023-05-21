//
// Created by user on 22.05.2023.
//
#include "ListStack.h"

ListStack::ListStack(const ValueType* valueArray, const size_t arraySize) {
    for (size_t i = 0; i < arraySize; i++) {
        this->_data.push_back(valueArray[i]);
    }
}

void ListStack::push(const ValueType &value) {
    this->_data.push_back(value);
}

void ListStack::pop() {
    this->_data.pop_back();
}

const ValueType &ListStack::top() const {
    return this->_data.back();
}

bool ListStack::isEmpty() const {
    return this->_data.empty();
}

size_t ListStack::size() const {
    return this->_data.size();
}