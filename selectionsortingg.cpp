#include <bits/stdc++.h>
using namespace std;
void selection(vector <int> &array);
int main()
{
 vector <int> array = {4,2,5,8,6,7,9,11,22,10,3};
 cout << "Let the array be: \n";
 for(auto it : array)
 {
    cout << it << " ";
 }
 cout << '\n';

 cout << "Sorting the array: \n";
 selection(array);
 cout << "Sorted array is: \n";
 for(auto it : array)
 {
    cout << it << " ";
 }
}

void selection(vector <int> &array)
{
   for(int i = 0; i < array.size() - 1; i++)
   {
     int minIndex = i;
     for(int j = i + 1; j < array.size(); j++)
     {
           if(array[j] < array[minIndex])
           {
            minIndex = j;
           }
     }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
   }

}