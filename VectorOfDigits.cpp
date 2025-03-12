# -*- mode: snippet -*-
# name:VectorOfDigits 
# key: <vod
# --
#if __cplusplus >= 202002L
    #include <ranges>
#endif
template <typename T>
std::vector<int> vod(T num) {
    std::string s = std::to_string(num);

#if __cplusplus >= 202302L
    // C++23: Clean one-liner using ranges
    return s | std::views::transform([](char c) { return c - '0'; }) | std::ranges::to<std::vector<int>>;
#elif __cplusplus >= 202002L
    // C++20: Uses std::views::transform with std::ranges::transform
    std::vector<int> digits;
    std::ranges::transform(s, std::back_inserter(digits), [](char c) { return c - '0'; });
    return digits;
#else
    // C++17: Uses standard std::transform
    std::vector<int> digits(s.size());
    std::transform(s.begin(), s.end(), digits.begin(), [](char c) { return c - '0'; });
    return digits;
#endif
}
