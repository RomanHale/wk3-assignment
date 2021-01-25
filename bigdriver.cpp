#include <iostream>
//#include "Queue.h"

#include "Queue.cpp" //non-standard way of compiling all our files together :(  )

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv) {
    Queue *my_queue = new Queue();
    
    cout << "Attempting to peek an empty queue: " << my_queue->peek_front() << endl; //expected result: -1
	cout << "Attempting to dequeue from an empty queue: " << my_queue->dequeue() << endl; // expected result: -1
	cout << endl << "Ok, let's add some values and peek after each one." << endl;
	my_queue->enqueue(1);
	cout << "my_queue->peek_front(): " << my_queue->peek_front() << endl;
	my_queue->enqueue(2);
	cout << "my_queue->peek_front(): " << my_queue->peek_front() << endl;
	my_queue->enqueue(3);
	cout << "my_queue->peek_front(): " << my_queue->peek_front() << endl;
	cout << "We're expecting our front value in queue to remain there for each addition." << endl << "Now let's try removing and checking after each." << endl << endl;
	my_queue->dequeue();
	cout << "my_queue->peek_front(): " << my_queue->peek_front() << endl;
	my_queue->dequeue();
	cout << "my_queue->peek_front(): " << my_queue->peek_front() << endl;
	my_queue->dequeue();
	cout << "my_queue->peek_front(): " << my_queue->peek_front() << endl;
	
    /*//peek at empty list
    cout << "my_stack->peek(): " << my_stack->peek() << endl;
	

    //add values and peek as we go
    my_stack->push(1);
    cout << "my_stack->peek(): " << my_stack->peek() << endl;
    my_stack->push(2);
    cout << "my_stack->peek(): " << my_stack->peek() << endl;
    my_stack->push(3);
    cout << "my_stack->peek(): " << my_stack->peek() << endl;

    //remove values and peek as we go
    cout << "my_stack->pop(): " << my_stack->pop() << endl;
    cout << "my_stack->peek(): " << my_stack->peek() << endl;
    cout << "my_stack->pop(): " << my_stack->pop() << endl;
    cout << "my_stack->peek(): " << my_stack->peek() << endl;
    cout << "my_stack->pop(): " << my_stack->pop() << endl;
    cout << "my_stack->peek(): " << my_stack->peek() << endl;

    //attempt to remove when empty
    cout << "my_stack->pop(): " << my_stack->pop() << endl;
    cout << "my_stack->peek(): " << my_stack->peek() << endl;
	*/
    return 0;
}