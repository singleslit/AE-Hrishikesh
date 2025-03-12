// # -*- mode: snippet -*-
// # name:BitwiseUtils
// # key:<bitwise
// # --
template <typename T>
constexpr bool isPowerOfTwo(T n) {
    return std::has_single_bit(n);
}

template <typename T>
constexpr int countSetBits(T n) {
    if constexpr (sizeof(T) <= 4) return __builtin_popcount(n);
    else return __builtin_popcountll(n);
}

template <typename T>
constexpr T lowestSetBit(T n) {
    return n & -n;
}

template <typename T>
constexpr T highestSetBit(T n) {
    return n ? T(1) << log2Floor(n) : 0;
}

template <typename T>
constexpr T MSUB(T n) {
    return n & ~(T(1) << log2Floor(~n));
}

template <typename T>
constexpr T toggleBit(T n, int k) {
    return n ^ (T(1) << k);
}

template <typename T>
constexpr bool isKthBitSet(T n, int k) {
    return (n & (T(1) << k)) != 0;
}

template <typename T>
constexpr T setBit(T n, int k) {
    return n | (T(1) << k);
}

template <typename T>
constexpr T clearBit(T n, int k) {
    return n & ~(T(1) << k);
}

template <typename T>
constexpr T toGrayCode(T n) {
    return n ^ (n >> 1);
}

template <typename T>
constexpr T grayToBinary(T gray) {
    T binary = 0;
    for (; gray; gray >>= 1) {
        binary ^= gray;
    }
    return binary;
}

template <typename T>
constexpr T xorUptoN(T n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

template <typename T>
constexpr T xorRange(T L, T R) {
    return xorUptoN(R) ^ xorUptoN(L - 1);
}

template <typename T>
constexpr T fastMod(T a, T b) {
    return a & (b - 1);
}

template <typename T>
constexpr int log2Floor(T n) {
    if (n == 0) return -1;
    if constexpr (sizeof(T) <= 4) return 31 - __builtin_clz(n);
    else return 63 - __builtin_clzll(n);
}

template <typename T>
constexpr int log2Ceil(T n) {
    return (n == 1) ? 0 : log2Floor(n - 1) + 1;
}

template <typename T>
constexpr T reverseBits(T n) {
    T rev = 0;
    int bits = sizeof(T) * 8;
    for (int i = 0; i < bits; i++) {
        rev <<= 1;
        rev |= (n & 1);
        n >>= 1;
    }
    return rev;
}

template <typename T>
constexpr T nextHigherSameSetBits(T n) {
    T x = n & -n;
    T y = n + x;
    return y | ((n ^ y) / x) >> 2;
}

template <typename T>
constexpr bool isEven(T n) {
    return countSetBits(n) % 2 == 0;
}

template <typename T>
constexpr void swapNumbers(T &a, T &b) {
    a ^= b;
    b ^= a;
    a ^= b;
}
