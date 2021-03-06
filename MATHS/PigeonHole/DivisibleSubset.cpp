#include <cstdio>
#include <cassert>
#include <vector>
using std::vector;

void Work() {
  int n;
  assert(scanf("%d", &n) == 1);
  vector<int> set(n + 1), used(n, -1);
  for (int i = 1; i <= n; ++i)
    assert(scanf("%d", &set[i]) == 1);
  used[0] = 0;
  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum = (sum + set[i]) % n;
    if (used[sum] != -1) {
      printf("%d\n", i - used[sum]);
      for (int j = used[sum] + 1; j <= i; ++j) {
        printf("%d%c", j, j == i ? '\n' : ' ');
      }
      return;
    }
    used[sum] = i;
  }
  assert(0);
  puts("-1");
}

int main() {
  int cases;
  assert(scanf("%d", &cases) == 1);
  while (cases--) Work();
  return 0;
}
