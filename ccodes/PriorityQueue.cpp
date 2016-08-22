#include <bits/stdc++.h>       
using namespace std;
int main ()
{
  //priority_queue<int, vector<int>, greater<int> > mypq;
  priority_queue<int, vector<int> > mypq;

  mypq.push(30);
  mypq.push(100);
  mypq.push(25);
  mypq.push(40);
  cout << mypq.top() << endl;
  cout << "Popping out elements...";
  while (!mypq.empty())
  {
     cout << ' ' << mypq.top();
     mypq.pop();
  }
  cout << '\n';

  return 0;
}