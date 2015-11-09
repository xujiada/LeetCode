class Queue {
public:
    stack<int> s1,s2;
    // Push element x to the back of queue.
    void push(int x) {
        s1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(s2.size() <= 0)
        {
            while(s1.size() > 0)
            {
                int data = s1.top();
                s2.push(data);
                s1.pop();
            }
        }
        s2.pop();
    }

    // Get the front element.
    int peek(void) {
        if(s2.size() <= 0)
        {
            while(s1.size() > 0)
            {
                int data = s1.top();
                s2.push(data);
                s1.pop();
            }
        }
        int data = s2.top();
        return data;
    }

    // Return whether the queue is empty.
    bool empty(void) {
         return s1.empty()&&s2.empty();
    }
};