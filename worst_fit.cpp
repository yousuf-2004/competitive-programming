#include <iostream>
using namespace std;


int main()
{
      int m, n;
      cout << "WorstFit\nEnter number of memory blocks: ";
      cin >> m;

      int block[m];
      bool allocated[m] = {false};

      cout << "Enter block sizes:\n";
      for (int i = 0; i < m; i++)
            cin >> block[i];

      cout << "Enter number of processes: ";
      cin >> n;

      int process[n];
      cout << "Enter process sizes:\n";
      for (int i = 0; i < n; i++)
            cin >> process[i];

      for (int i = 0; i < n; i++)
      {
            int worst = -1;

            for (int j = 0; j < m; j++)
            {
                  if (!allocated[j] && block[j] >= process[i])
                  {
                        if (worst == -1 || block[j] > block[worst])
                              worst = j;
                  }
            }

            if (worst != -1)
            {
                  cout << "Process " << i + 1
                       << " allocated to block " << worst + 1 << endl;
                  allocated[worst] = true;
            }
            else
            {
                  cout << "Process " << i + 1
                       << " cannot be allocated" << endl;
            }
      }
      return 0;
}