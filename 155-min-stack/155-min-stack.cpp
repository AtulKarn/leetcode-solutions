class MinStack {
private:
    int tp;
    int arr[30000];
public:
    MinStack() {
        tp = -1;
    }
    
    void push(int val) {
        arr[++tp] = val;
    }
    
    void pop() {
        tp--;;
    }
    
    int top() {
        return arr[tp];
    }
    
    int getMin() {
        int temp = arr[tp];
        for(int i = tp-1;i>=0;i--)
            temp = min(temp, arr[i]);
        return temp;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */