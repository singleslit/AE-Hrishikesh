//number to Binary String template
template<typename T>
string numToBinary(T n) {
  if (n == 0) return "0";
  string bin;
  while (n) {
    bin += (n & 1) ? '1' : '0';
    n >>= 1;
  }
  reverse(all(bin));
  return bin;
}

