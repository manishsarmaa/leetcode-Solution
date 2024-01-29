class MyQueue {
public:
    stack<int> st1, st2;
    MyQueue() {
        
    }
    
    void push(int x) {
            st1.push(x);
    }
    
    int pop() {
        while(!st1.empty()){
          int top=st1.top();
          st1.pop();
          st2.push(top);
        }
        int popped_ele = st2.top();
        st2.pop();
        while(!st2.empty()){
          int top=st2.top();
          st2.pop();
          st1.push(top);
        }
        return popped_ele;
    }
    
    int peek() {
        while(!st1.empty()){
          int top=st1.top();
          st1.pop();
          st2.push(top);
        }
        int front_ele = st2.top();
        while(!st2.empty()){
          int top=st2.top();
          st2.pop();
          st1.push(top);
        }
        return front_ele;
    }
    
    bool empty() {
        return st1.empty();
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