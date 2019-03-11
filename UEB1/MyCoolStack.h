//
// Created by Thomas on 2/25/2019.
//

#include <iostream>

#ifndef POSTFIXCALCULATOR_MYCOOLSTACK_H
#define POSTFIXCALCULATOR_MYCOOLSTACK_H

template <typename T>
class MyCoolStackNode {
private:
    T item;
    MyCoolStackNode<T> *next;
public:
    MyCoolStackNode<T>(T initial) {
        this->setItem(initial);
    }
    
    T getItem() {
        return this->item;
    }
    
    void setItem(T item) {
        this->item = item;
    }

    MyCoolStackNode *getNext() {
        return this->next;
    }
    
    void setNext(MyCoolStackNode *next) {
        this->next = next;
    }
};

template <typename T>
class MyCoolStack {
private:
    MyCoolStackNode<T> *last;

    MyCoolStackNode<T> *getLast() {
        return this->last;
    }

    void setLast(MyCoolStackNode<T> *last) {
        this->last = last;
    }
public:
    void push(T item) {
        auto *nextStack = new MyCoolStackNode<T>(item);
        nextStack->setNext(this->getLast());
        this->setLast(nextStack);
    }

    T pop() {
        MyCoolStackNode<T> *lastStack = this->getLast();
        T returnItem = lastStack->getItem();
        this->setLast(lastStack->getNext());
        delete lastStack;

        return returnItem;
    }

    size_t size() {
        size_t stackSize = 0;
        MyCoolStackNode<T> *currentStack = this->getLast();
        stackSize++;

        while ((currentStack = currentStack->getNext()) != nullptr) {
            stackSize++;
        }

        return stackSize;
    }
};

#endif //POSTFIXCALCULATOR_MYCOOLSTACK_H
