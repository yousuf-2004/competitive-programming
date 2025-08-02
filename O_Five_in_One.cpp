#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

// Function to count prime numbers in the vector
int prime(vector<int> &a)
{
      int cnt = 0;
      for (int i = 0; i < a.size(); i++)
      {
            if (a[i] < 2)
                  continue; // 0 and 1 are not prime

            bool isPrime = true;
            if (a[i] == 2)
            {
                  cnt++;
                  continue;
            }

            for (int j = 2; j * j <= a[i]; j++)
            {
                  if (a[i] % j == 0)
                  {
                        isPrime = false;
                        break;
                  }
            }

            if (isPrime)
                  cnt++;
      }
      return cnt;
}

// Function to count palindrome numbers in the vector
int palindrome(vector<int> &a)
{
      int cnt = 0;
      for (int i = 0; i < a.size(); i++)
      {
            int temp = a[i], rev = 0;
            while (temp > 0)
            {
                  rev = rev * 10 + (temp % 10);
                  temp /= 10;
            }
            if (rev == a[i])
                  cnt++;
      }
      return cnt;
}

// Function to find the number with the maximum divisors
int max_divisor(vector<int> &a)
{
      int max_count = 0, result = -1;

      for (int i = 0; i < a.size(); i++)
      {
            int cnt = 0;
            for (int j = 1; j <= a[i]; j++)
            {
                  if (a[i] % j == 0)
                        cnt++;
            }

            if (cnt >= max_count)
            {
                  max_count = cnt;
                  result = a[i];
            }
      }
      return result;
}

// Solve function to process input and output results
void solve()
{
      int n;
      cin >> n;
      vector<int> a(n);

      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int mx = *max_element(a.begin(), a.end());
      int mn = *min_element(a.begin(), a.end());

      cout << "The maximum number : " << mx << endl;
      cout << "The minimum number : " << mn << endl;
      cout << "The number of prime numbers : " << prime(a) << endl;
      cout << "The number of palindrome numbers : " << palindrome(a) << endl;
      cout << "The number that has the maximum number of divisors : " << max_divisor(a) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}
