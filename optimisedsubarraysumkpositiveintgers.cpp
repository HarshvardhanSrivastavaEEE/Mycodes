#include <bits/stdc++.h>
using namespace std;
void solve(vector <int> &array, long long k);
int main()
{
  vector <int> array = {1,4,6,7,1,1,1,1,1,1,9,99,87};

  solve(array,6);

 
}

void solve(vector <int> &array, long long k)
{

int left = 0;
int right = 0;
int n;
long long sum = array[0];
int maxlen = 0;
n = array.size();

while(right < n)
{
   while(left <= right && sum > k)
   {
    sum -= array[left];
    left++;
   }
    if (sum == k)
    {
        maxlen = max(maxlen,right - left + 1);

    }
    right++;

    if(right < n)
    {
        sum += array[right];
    }

}

cout << maxlen;


}