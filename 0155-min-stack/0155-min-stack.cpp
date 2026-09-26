class MinStack {
public:
    stack<long long> st;
    long long mini;

    MinStack() {
        
    }

    void push(int val) {

        // First element
        if (st.empty()) {
            st.push(val);
            mini = val;
        }

        // Normal value
        else if (val >= mini) {
            st.push(val);
        }

        // New minimum
        else {
            // Store encoded value
            st.push(2LL * val - mini);

            // Update minimum
            mini = val;
        }
    }

    void pop() {

        long long x = st.top();
        st.pop();

        // x is an encoded value
        if (x < mini) {
            mini = 2LL * mini - x;
        }
    }

    int top() {

        long long x = st.top();

        // Encoded value means actual value is mini
        if (x < mini) {
            return mini;
        }

        return x;
    }

    int getMin() {
        return mini;
    }
};