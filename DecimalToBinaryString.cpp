# -*- mode: snippet -*-
# name:DecimalToBinaryString
# key:<dtbs
# --
template <typename T>
std::string dtbs(T n) {
    if (n == 0) return "0"; // Handle special case

    std::string bin;
    while (n) {
        bin += (n & 1) ? '1' : '0';
        n >>= 1;
    }
    std::reverse(bin.begin(), bin.end()); // Reverse to get correct order
    return bin;
}
