#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>

template<typename T>
class Queue {

    private:
        int head;
        int tail;
        int length;
        T *elements;
    public:
        Queue(int length) {
            this->length = length;
            this->head = 0;
            this->tail = 0;
            this->elements = new T[length];
        }
        void enqueue(T element) {

            if (this->isFull()) throw "Queue is full";

            int position = this->tail % this->length;
            this->elements[position] = element;
            this->tail++;
        }

        T dequeue() {

            if (this->isEmpty()) throw "Queue is empty";

            int position = this->head % this->length;
            T element = this->elements[position];
            this->elements[position] = 0;
            this->head++;
            return element;
        }

        bool isEmpty() {

            bool empty = this->head == this->tail;
            return empty;
        }

        bool isFull() {

            int tailToHeadDiff = this->tail - this->head;
            bool full = tailToHeadDiff == this->length;
            return full;
        }

        T peek() {

            int position = this->head % this->length;
            T element = this->elements[position];

            return element;
        }

        void print() {

            for (int index = this->head; index < this->tail; index++) {
                int position = index % this->length;
                std::cout << "[" << this->elements[position] << "] ";
            }
        }
};

#endif