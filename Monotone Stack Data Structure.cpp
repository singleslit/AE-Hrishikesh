// Monotonic Stack Template
// -------------------------------------------------------
// Purpose: Generalized function to compute the index of
// the previous/next smaller/greater element for each
// element in the array using a monotonic stack.
// 
// Parameters:
// - array     : input array of type vll (vector<long long>)
// - reverse   : if true, traverses array from right to left
//               (used for "next" operations); otherwise, left to right
//               (used for "previous" operations)
// - comp      : custom comparator lambda to define the stack condition
//               e.g., [](ll a, ll b){ return a < b; } for PSE
// - none_val  : value to return when no such element exists
//               usually 0 (invalid index) or n+1 (past end)
// 
// Returns:
// - res       : vector of 1-based indices of the desired element
//               or none_val when not found
template<typename Compare>
vll mono_stack(const vll &array, bool reverse, Compare comp, ll none_val) {
    int n = array.size();
    vll res(n, 0);         // Output array storing results
    stack<int> stk;        // Monotonic stack storing *indices*

    if (!reverse) {
        // Traverse left to right → Previous Smaller/Greater Element
        for (int i = 0; i < n; ++i) {
            // Pop elements that violate the monotonic condition
            while (!stk.empty() && comp(array[i], array[stk.top()])) {
                stk.pop();
            }
            // If stack is empty, no valid previous element found
            // Else, store 1-based index of the previous valid element
            res[i] = stk.empty() ? none_val : stk.top() + 1;

            // Push current index into the stack
            stk.push(i);
        }
    } else {
        // Traverse right to left → Next Smaller/Greater Element
        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && comp(array[i], array[stk.top()])) {
                stk.pop();
            }
            res[i] = stk.empty() ? none_val : stk.top() + 1;
            stk.push(i);
        }
    }

    return res;
}


inline vll PSE(const vll &array) {
    return mono_stack(array, false, [](ll a, ll b){ return a < b; }, 0);
}

inline vll NSE(const vll &array) {
    return mono_stack(array, true, [](ll a, ll b){ return b >= a; }, (ll)array.size() + 1);
}

inline vll PGE(const vll &array) {
    return mono_stack(array, false, [](ll a, ll b){ return a > b; }, 0);
}

inline vll NGE(const vll &array) {
    return mono_stack(array, true, [](ll a, ll b){ return b <= a; }, (ll)array.size() + 1);
}
// ----------------------------------------------------------------------------------------
