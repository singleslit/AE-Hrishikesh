// bool to check if a number is a perfect square or not
bool isPerfSquare(int num) {
  if (num < 0) return false;
  if (num == 0 || num == 1) return true;

  int x = num;
  int y = (x + 1) >> 1;

  while (y < x) {
    x = y;
    y = (x + num / x) >> 1;
  }

  return x * x == num;
}
// ----------------------------------------------------------------------------------------
