vll prevSmaller(const vll& array) {//first smaller value before
    int n = sz(array);
    vll res(n, 0);
    stkll stk; // stack of indices
    
    for (int i = 0; i < n; ++i) {
        while (!stk.empty() && array[stk.top()] >= array[i])
            stk.pop();
        
        if (!stk.empty())
            res[i] = stk.top()+1;
        else
            res[i] = 0; // no smaller element before
        
        stk.push(i);
    }
    
    return res;
}
