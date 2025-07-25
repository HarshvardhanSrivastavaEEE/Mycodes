#include <bits/stdc++.h>
using namespace std;

void read (vector <int> &array, int target);
int main()
{
  vector <int> array = {3,5,6,7,8,4};
  int k = 7;
  read(array,k);
}
void read (vector <int> &array, int target)
{
   unordered_map <int,int> mpp;
   for(int i = 0; i < array.size(); i++)
   {

     int more;
     more = target - array[i];

     if(mpp.find(more) != mpp.end())
     {
      cout << "Indices are: " << i << " and " <<  mpp[more];
     }

     mpp[array[i]] = i;

   }


}