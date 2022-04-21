#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack{
    
    private:
        int top;
        int* elements;
        int length;
    public:
        
        Stack(int length) {
            this->top = -1;
            this->length = length;
            this->elements = new int[length];
        }

        ~Stack() {
            delete[] this->elements;
        }

        void push(int element) {

            if (this->isFull()) throw "Stack is full";

            this->top++;
            int position = this->top % this->length;
            this->elements[position] = element;
        }

        int pop() {
            
            if (this->isEmpty()) throw "Stack is empty";
            int element = this->elements[this->top];
            this->elements[this->top] = 0;
            this->top--;
            return element;
        }

        bool isEmpty() {

            bool empty = this->top == -1;
            return empty;
        }

        bool isFull() {

            bool full = this->top == this->length - 1;
            return full;
        }

        int peek() {

            int element = this->elements[this->top];
            
            return element;
        }

        void print() {
            
            int position = this->top;
            for (int index = position; index >= 0; index--) {
                std::cout << "[" << elements[index] << "] ";
            }
        }
};

#endif