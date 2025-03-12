int tsp(int curr, int bitmask) { // bitmask stores the visited coordinates
  if (bitmask == (1 << (n + 1)) - 1)
    return dist[curr][0]; // return trip to close the loop
  if (memo[curr][bitmask] != -1)
    return memo[curr][bitmask];

  int ans = 2000000000;
  for (int nxt = 0; nxt <= n; nxt++) // O(n) here
    if (nxt != curr && !(bitmask & (1 << nxt))) // if coordinate nxt is not visited yet
      ans = min(ans, dist[curr][nxt] + tsp(nxt, bitmask | (1 << nxt)));
  return memo[curr][bitmask] = ans;
}
