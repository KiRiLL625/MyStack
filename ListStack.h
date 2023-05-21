//
// Created by user on 21.05.2023.
//

#ifndef STACK_LISTSTACK_H
#define STACK_LISTSTACK_H

#include <list>
#include "StackImplementation.h"

class ListStack : public IStackImplementation {
private:
    std::list<ValueType> _data;
public:
    ListStack() = default;

    ListStack(const ValueType* valueArray, const size_t arraySize);

    // добавление в хвост
    void push(const ValueType& value) override;
    // удаление с хвоста
    void pop() override;
    // посмотреть элемент в хвосте
    const ValueType& top() const override;
    // проверка на пустоту
    bool isEmpty() const override;
    // размер
    size_t size() const override;
};

#endif //STACK_LISTSTACK_H
