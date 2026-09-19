class MinStack {
private:
    stack<int> st;
    stack<int> mn;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);

        if (mn.empty() || value <= mn.top()) {
            mn.push(value);
        }
    }
    
    void pop() {
        if (st.top() == mn.top()) {
            mn.pop();
        }

        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};