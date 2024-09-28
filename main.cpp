#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(88);
    q.enqueue(55);

    q.dequeue();
    q.dequeue();

    cout << "Front value: " << q.frontValue() << " in the queue" << endl;

    return 0;
}