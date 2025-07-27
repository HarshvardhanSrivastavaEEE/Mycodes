#include <bits/stdc++.h>
using namespace std;
int perform(vector <int> &array);
int main()
{
  
 vector <int> array = {1,2,5,3,5,5,5,5,5,7,8};
 cout << perform (array);

}

int perform(vector <int> &array)
{

 int n;
 n = array.size();
 unordered_map <int,int> mpp;

 for(int i = 0; i < n; i++)
 {
    mpp[array[i]] += 1;
 }

int x;
for(auto it : mpp)
{
   if(it.second == n/2)
   {
       x = it.first;
   }
}

return x;
}