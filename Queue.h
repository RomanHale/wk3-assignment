#include "node.h"

class Queue {
    private:
        node *front;
		node *back;
		node *top;
    public:
        Queue();
        void enqueue(int new_value);
        int dequeue();
        int peek_front();
};
