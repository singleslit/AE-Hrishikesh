struct SCC {
    int n, timer = 0, compCount = 0;
    vector<vector<int>> g;
    vector<int> disc, low, comp, st;
    vector<bool> inStack;

    SCC(int n) : n(n), g(n), disc(n, -1), low(n), comp(n, -1), inStack(n, false) {}

    void addEdge(int u, int v) {
        g[u].push_back(v);
    }

    void dfs(int u) {
        disc[u] = low[u] = timer++;
        st.push_back(u);
        inStack[u] = true;

        for (int v : g[u]) {
            if (disc[v] == -1) {
                dfs(v);
                low[u] = min(low[u], low[v]);
            } else if (inStack[v]) {
                low[u] = min(low[u], disc[v]);
            }
        }

        // root of SCC
        if (low[u] == disc[u]) {
            while (true) {
                int v = st.back(); st.pop_back();
                inStack[v] = false;
                comp[v] = compCount;
                if (v == u) break;
            }
            compCount++;
        }
    }

    void run() {
        for (int i = 0; i < n; i++) {
            if (disc[i] == -1) dfs(i);
        }
    }
};
