template <typename T>
void debugStack(std::stack<T> stk) {
    std::cout << "Stack (top to bottom): ";
    while (!stk.empty()) {
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << "\n";
}
