#include<bits/stdc++.h>
using namespace std;

int main () {
  string line;
  stringstream ss;
  ifstream myfile ("sample3.txt");
  if (myfile.is_open())
  {
    while ( getline(myfile,line) )
    {
      ss << line;
    }
    myfile.close();
  }
  else cout << "Unable to open file";
  line = ss.str();
  return 0;
}