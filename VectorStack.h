//
// Created by user on 21.05.2023.
//

#ifndef STACK_VECTORSTACK_H
#define STACK_VECTORSTACK_H

#include "Vector.h"

#include "StackImplementation.h"


class VectorStack : public IStackImplementation {
private:
    Vector _data;
public:
    VectorStack() = default;

    VectorStack(const ValueType *valueArray, const size_t arraySize);

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

#endif //STACK_VECTORSTACK_H
