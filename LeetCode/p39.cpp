// implement queue with stack

class MyQueue
{
    stack<int> stack1;
    stack<int> stack2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        stack1.push(x);
    }

    int pop()
    {
        if (stack1.empty() && stack2.empty())
        {
            return -1;
        }
        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int pop_top = stack2.top();
        stack2.pop();
        return pop_top;
    }

    int peek()
    {
        if (stack1.empty() && stack2.empty())
        {
            return -1;
        }
        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int peek_top = stack2.top();
        return peek_top;
    }

    bool empty()
    {
        if (stack1.empty() && stack2.empty())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */