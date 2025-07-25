#include <bits/stdc++.h>
using namespace std;
string read(vector<int> array, int target);
int main()
{
   vector <int> array = {3,4,5,6,8};
   int k = 7;
   cout << read(array,7);
}
string read ( vector<int> array, int target)
{
   unordered_map <int,int> mpp;
   for(int i = 0; i < array.size(); i++)
   {
      int a = array[i];
      int more = target - a;
      if(mpp.find(more) != mpp.end())
      {
         return "YES";
      }
      mpp[a] = i;
   }
   return "NO";
}