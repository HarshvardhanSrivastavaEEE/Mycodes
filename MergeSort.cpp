#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &arr, int low, int mid, int high);
void ms(vector <int> &arr, int low, int high);
void mergesort(vector <int> &arr , int n);
int main(){
int size;
cout << "Hello! " << "Please enter the size of your array! \n";
cin >> size;
vector <int> arr(size);
cout << "Now lets input the elements! \n";
for(int i = 0; i < size ; i++)
{
    cout << "Enter element number" << i+1 << '\n';
    cin >> arr[i];
}
mergesort(arr, size );
cout << "Sorted array is: \n";
for(auto it : arr)
{
 cout << it << " ";
}
}
void merge(vector <int> &arr, int low, int mid, int high)
{
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high)
    {
      if(arr[left] <= arr[right])
      {
        temp.push_back(arr[left]);
        left++;
      }
      else
      {
        temp.push_back(arr[right]);
        right++;
      }

    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
}
void ms(vector <int> &arr, int low, int high)
{
if(low>=high) {return;}
int mid = (low+high)/2;
ms(arr,low,mid);
ms(arr,mid+1,high);
merge(arr,low,mid,high);
}
void mergesort(vector <int> &arr,int n)
{
  ms(arr,0,n-1);
}
