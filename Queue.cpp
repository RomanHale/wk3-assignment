#include "Queue.h"

//construct a linked list
//yes i pulled this from your Stack.cpp code and modified it
//our queue now works with a front and back pointer
Queue::Queue() {
    front = nullptr;
	back = nullptr;
}

//enqueue new element
void Queue::enqueue(int new_value) {
    node *new_node = new node();
    new_node->value = new_value;
    new_node->next = back;
	if(back!=nullptr){
		back->prev=new_node;
	}
	new_node->prev = nullptr;
    back = new_node;
	if(front==nullptr){
		front=new_node;
	}
}
//dequeue new element, return that top object or return a newly created object if queue is empty
int Queue::dequeue() {
    int result = -1;
    if(front != nullptr) {
        result = front->value;
        front = front->prev;
    }
    return result;
}

//peek front element and return that top element or return a newly created object if queue is empty
int Queue::peek_front() {
    if(front != nullptr) {
        return front->value;
    }
    else {
        return -1;
    }
}