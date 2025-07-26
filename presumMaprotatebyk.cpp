#include <bits/stdc++.h>
using namespace std;
void Length(vector<int> &array, long long k);
int main()
{
  int size;
  int k;
  cout << "Hello! \n";
  cout << "Please enter the size of your array! \n";
  cin >> size;

  cout << "Please enter your target! \n";
  do
  {
    cin >> k;
  } while (size < k);
  vector <int> array(size);

  cout << "Now lets input your elements! \n";

  for(int i = 0; i < array.size(); i++)
  {
   cout << "Enter your element number #" << i+1 << ":" << " ";
   cin >> array[i];
   cout << '\n';

  }

  cout << "Your elements are: \n";
  for(auto it : array)
  {
    cout << it << " ";

  }
  cout << '\n';
  cout << "Now lets find the max length of your subarray whose sum equals to " << k;
  cout << '\n';
  cout << "Max length is: \n";
  Length(array,k);
  


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
   presumMap[sum] = i;

  }

cout << maxlen;

}