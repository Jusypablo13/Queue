#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int capacity){
    front = -1; // Indica que la cola esta vacia
    rear = -1;  // Indica que la cola esta vacia
    size = capacity; // Tamaño de la cola
    queue = new int[size]; // Crear la cola
}

bool Queue::isEmpty(){
    return front == -1; // Si front es -1, la cola esta vacia
}

bool Queue::isFull(){
    return rear == size - 1; // Si rear es igual al tamaño de la cola, la cola esta llena
}

void Queue::enqueue(int value){
    if(isFull()){
        cout << "Queue llena: " << endl;
        return;
    }
    if(front == -1){
        front = 0;
    }
    queue[++rear] = value;
    cout << value << " enqueue to queue" << endl; // Agregar un valor a la cola
}

void Queue::dequeue(){
    if(isEmpty()){
        cout << "Queue vacia" << endl;
        return;
    }
    cout << queue[front] << " dequeue from queue" << endl; // Eliminar un valor de la cola
    front++;

    if(front > rear){
        front = -1;
        rear = -1;
    }
}

int Queue::frontValue(){
    if(isEmpty()){
        cout << "Queue vacia" << endl;
        return -1;
    }
    return queue[front];
}

Queue::~Queue(){
    delete[] queue;
}