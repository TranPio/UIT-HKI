#include </stdc++.h> using namespace std;

void dump(vector& data) {
 for (auto itr = data.begin();
  itr != data.end(); ++itr) { 
  if (itr != data.begin()) { 
  cout << " "; } 
  cout << *itr; }

cout << endl;
}

int main() { int n, i, m, j, u; 
vector a; cin >> n; for (i = 1; i <= n; i++) { 
a.push_back(i); } cin >> m; 
int duoi; for(i = 1; i <= m; i++) { 
cin >> u;
 for (auto itr = a.begin();
  itr != a.end(); ++itr) { 
 if (*itr == u) { a.erase(itr); 
 a.insert(a.begin(), u); break; } } }
  dump(a);

return 0;
}