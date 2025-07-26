#include <bits/stdc++.h>
using namespace std;
void Length(vector<int> &array, long long k);
int main()
{
  vector <int> array = {2,2,23,4,5,5,5,1,1,1,1,1,2,7,8};
  vector <int> queries = {17,5,19};

  for(auto k : queries)
  {
    Length(array,k);
    cout << '\n';
  }

}

void Length(vector <int> &array, long long k)
{
  int maxlen = 0;
  long long sum = 0;
  unordered_map <long long , int> presumMap;

  for(int i = 0; i < array.size(); i++)
  {
   sum += array[i];

   if(sum == k)
   {
     maxlen = max(maxlen,i+1);//checks if new value is greater than previous value
   }
    
   long long rem = sum - k;
   if(presumMap.find(rem) != presumMap.end())
   {
     int len = i - presumMap[rem];
     maxlen = max(maxlen,len);

   }
   if(presumMap.find(sum) == presumMap.end())
   {
      presumMap[sum] = i;
   }

  }

cout << maxlen;

}