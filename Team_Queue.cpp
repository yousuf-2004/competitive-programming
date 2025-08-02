#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int scenario = 0;
      int number_of_teams;
      while (cin >> number_of_teams and number_of_teams > 0)
      {
            scenario++;
            cout << "Scenario #" << scenario << '\n';
            map<int, int> team_id;
            for (int i = 1; i <= number_of_teams; i++)
            {
                  int team_members;
                  cin >> team_members;
                  while (team_members--)
                  {
                        int x;
                        cin >> x;
                        team_id[x] = i;
                  }
            }
            queue<int> queue_of_teams;
            map<int, queue<int>> queue_of_team_members;
            string inp;
            while (cin >> inp and inp != "STOP")
            {
                  if (inp == "ENQUEUE")
                  {
                        int x;
                        cin >> x;
                        int team = team_id[x];
                        if (!queue_of_team_members[team].empty())
                        {
                              queue_of_team_members[team].push(x);
                        }
                        else
                        {
                              queue_of_teams.push(team);
                              queue_of_team_members[team].push(x);
                        }
                  }
                  else
                  {
                        int team_in_front = queue_of_teams.front();
                        cout << queue_of_team_members[team_in_front].front() << '\n';
                        queue_of_team_members[team_in_front].pop();

                        if (queue_of_team_members[team_in_front].empty())
                        {
                              queue_of_teams.pop();
                        }
                  }
            }
            cout << '\n';
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}