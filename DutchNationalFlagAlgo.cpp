#include <bits/stdc++.h>
using namespace std;
void algo(vector <int> &array);
int main()
{
vector <int> array ={1,0,1,1,0,2,1,2,2,0,1,2,2,2,0,2};
algo(array);
for(auto it : array)
{
    cout << it << " ";

}

}

void algo(vector <int> &array)
{
   int low = 0;
   int high = array.size() - 1;
   int mid = 0;

   while(mid <= high)
   {
    if(array[mid] == 0)
    {
       int temp = array[mid];
       array[mid] = array[low];
       array[low] = temp;
       low++;
       mid++;

    }

    else if(array[mid] == 1)
    {
        mid++;
    }

    else 
    {
      int temp = array[high];
      array[high] = array[mid];
      array[mid] = temp;
      high--;

    }



   }



}
