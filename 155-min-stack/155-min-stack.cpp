
class MinStack {
private:
    int tp;
    vector<vector<int>> arr;
public:
    MinStack() {
        tp = -1;
        arr = vector<vector<int>>(30000, vector<int>(2,0));
    }
    
    void push(int val) {
        tp++;
        arr[tp][0] = val;
        if (tp==0){
            arr[tp][1] = val;
        }
        else{
            arr[tp][1] = min(val, arr[tp-1][1]);
        }
    }
    
    void pop() {
        tp--;
    }
    
    int top() {
        return arr[tp][0];
    }
    
    int getMin() {
        return arr[tp][1];
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