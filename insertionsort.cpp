#include <bits/stdc++.h>
using namespace std;
void insertion(vector <int> &array);


int main()
{
//we form small arrays withing the arrays and then compare
vector <int> array = {6,5,9,2,4,10,6,11,3};
cout << "Let the elements of the array be: \n";
for(auto it : array)
{
    cout << it << " ";
}
cout << '\n';
cout << "Sorting the array \n";
insertion(array);
cout << "Sorted array is: \n";
for(auto it : array)
{
    cout << it << " ";
}

}

void insertion(vector <int> &array)
{
  for(int i = 0; i < array.size(); i++)
  {
    int j = i;
    while(j > 0 && array[j-1] > array[j])
    {
        int temp = array[j-1];
        array[j-1] = array[j];
        array[j] = temp;
        j--;
    }
  }
 //The work of inner while loop is that THE correct element WILL get to its correct position.

}