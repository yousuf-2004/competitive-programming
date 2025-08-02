#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 30;
vector<int> v[N];
int n;
pair<int, int> get_position(int x)
{
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < v[i].size(); j++)
            {
                  if (v[i][j] == x)
                  {
                        return make_pair(i, j);
                  }
            }
      }
      return make_pair(0, 0);
}
void move_to_initial_vectors(int vector_id, int position_in_vector)
{
      for (int i = position_in_vector + 1; i < v[vector_id].size(); i++)
      {
            int x = v[vector_id][i];
            v[x].push_back(x);
      }
      v[vector_id].resize(position_in_vector + 1);
}

void move_on_top_of_a_vector(int vector_id, int position_in_vector, int dest_vector_id)
{
      for (int i = position_in_vector; i < v[vector_id].size(); i++)
      {
            int x = v[vector_id][i];
            v[dest_vector_id].push_back(x);
      }
      v[vector_id].resize(position_in_vector);
}

void solve()
{
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            v[i].push_back(i);
      }
      string s;
      while (cin >> s and s != "quit")
      {
            int a, b;
            string type;
            cin >> a >> type >> b;
            auto [vector_id_a, position_in_vector_a] = get_position(a);
            auto [vector_id_b, position_in_vector_b] = get_position(b);
            if (vector_id_a == vector_id_b)
            {
                  continue;
            }
            if (s == "move")
            {
                  if (type == "onto")
                  {
                        move_to_initial_vectors(vector_id_a, position_in_vector_a);
                        move_to_initial_vectors(vector_id_b, position_in_vector_b);
                        move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
                  }
                  else
                  {
                        move_to_initial_vectors(vector_id_a, position_in_vector_a);
                        move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
                  }
            }
            else
            {
                  if (type == "onto")
                  {
                        move_to_initial_vectors(vector_id_b, position_in_vector_b);
                        move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
                  }
                  else
                  {
                        move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
                  }
            }
      }
      for (int i = 0; i < n; i++)
      {
            cout << i << ":";
            for (int j = 0; j < v[i].size(); j++)
            {
                  cout << " " << v[i][j];
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