vector<int> prime_sieve(int n) {
    if (n <= 2) return {};  // No primes below 2
    if (n == 2) return {2}; // Special case for smallest prime

    // Step 1: Precompute the numbers that are coprime to 2, 3, and 5
    constexpr int mod30table[8] = {1, 7, 11, 13, 17, 19, 23, 29};

    int size = (n + 29) / 30; // Compress the range
    vector<uint8_t> sieve(size, 0xFF); // Each byte holds 8 numbers
    sieve[0] &= ~1; // 1 is not prime

    int limit = sqrt(n);

    // Step 2: Sieve up to sqrt(n)
    for (int i = 0; i <= limit / 30; i++) {
        for (int mask = sieve[i]; mask > 0; mask &= (mask - 1)) {
            int idx = __builtin_ctz(mask); // Get the lowest set bit
            int prime = i * 30 + mod30table[idx];
            int prime2 = prime * 2;

            for (int j = (prime * prime) / 30; j < size; j += prime) {
                sieve[j] &= ~(1 << idx);
            }
        }
    }

    // Step 3: Collect prime numbers
    vector<int> primes = {2, 3, 5};
    for (int i = 0; i < size; i++) {
        for (int mask = sieve[i]; mask > 0; mask &= (mask - 1)) {
            int idx = __builtin_ctz(mask);
            int prime = i * 30 + mod30table[idx];
            if (prime > n) break;
            primes.push_back(prime);
        }
    }

    return primes;
}
