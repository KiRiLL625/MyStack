//
// Created by user on 21.05.2023.
//

#ifndef STACK_STACKIMPLEMENTATION_H
#define STACK_STACKIMPLEMENTATION_H

#include <cstddef>

// приходится тянуть ValueType во все места,
using ValueType = double;

// интерфейс для конкретных реализаций контейнера для стека
class IStackImplementation {
public:
    //IStackImplementation(const IStackImplementation & copyStackImplementation) = delete;
    // добавление в хвост
    virtual void push(const ValueType& value) = 0;
    // удаление с хвоста
    virtual void pop() = 0;
    // посмотреть элемент в хвосте
    virtual const ValueType& top() const = 0;
    // проверка на пустоту
    virtual bool isEmpty() const = 0;
    // размер
    virtual size_t size() const = 0;
    // виртуальный деструктор
    virtual ~IStackImplementation() = default;
};

#endif //STACK_STACKIMPLEMENTATION_H
