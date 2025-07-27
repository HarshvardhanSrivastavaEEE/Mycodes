#include <bits/stdc++.h>
using namespace std;
void moore(vector <int> &array);

int main()
{

vector <int> array = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
moore(array);

}

void moore(vector <int> &array)
{
   int el;
   int cnt = 0;

   for(int i = 0; i < array.size(); i++)
   {
     if(cnt == 0)
     {
        el = array[i];
     }
     else if(array[i] == el)
     {
        cnt++;
     }
     else
     {
        cnt--;
     }

   }

int freq = 0;
for(auto it : array)
{
    if(it == el)
    {
        freq++;
    }
}

if(freq > array.size()/2)
{
    cout << "Element is: " << el;
}

else
{
   cout << "No such element in majority! \n";
}


}