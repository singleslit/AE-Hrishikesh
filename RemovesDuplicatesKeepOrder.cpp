# -*- mode: snippet -*-
# name:Removes Duplicates Keep Order
# key:<rdko
# --
template <typename T>
std::vector<T> RDKO(const std::vector<T> &arr) {
    std::unordered_set<T> seen;
    std::vector<T> result;
    for (const T &elem : arr) {
        if (seen.insert(elem).second) { // Insert only if new
            result.push_back(elem);
        }
    }
    return result;
}
