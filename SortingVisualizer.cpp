#include <bits/stdc++.h>

using namespace std;
void Bubble(vector <int> &array, int size);
void Selection(vector <int> &array, int size);
void Insertion(vector <int> &array, int size);
void Merge(vector <int> &array,int low,int mid,int high);
void Ms(vector <int> &array, int low, int high);
void MergeSort(vector <int> &array, int size);

int main()
{
int size;
cout << "Hello!" << " Please enter the size of your array! \n";
cin >> size;
vector <int> arr(size);
cout << "Now lets input the elements of your array! \n";
for(int i = 0; i < size; i++)
{
    cout << "Enter element #" << i + 1 << ":";
    cin >> arr[i];
    cout << '\n';
}
cout << "Displaying your elements please wait! \n";
cout << "Your entered elements are: \n";
for(auto it : arr)
{
    cout << it << " ";
}
int select;
cout << '\n';
cout << "Now please select the type of sorting you want to perform! \n";
cout << "1-->Bubble Sort \n";
cout << "2-->Selection Sort \n";
cout << "3-->Insertion Sort \n";
cout << "4-->Merge Sort \n";
do
{
cout << "Please enter your choice:";
cin >> select;
cout << '\n';

if(select == 1)
{
    Bubble(arr,size);
    cout << "Sorted array is: \n";
    for(auto it1 : arr)
    {
        cout << it1 << " ";
    }
}
else if(select == 2)
{
    Selection(arr,size);
    cout << "Sorted array is: \n";
    for(auto it2 : arr)
    {
        cout << it2 << " ";
    }
}
else if(select == 3)
{
    Insertion(arr,size);
    cout << "Sorted array is: \n";
    for(auto it3 : arr)
    {
        cout << it3 << " ";
    }
}
else if(select == 4)
{
    MergeSort(arr,size);
    cout << "Sorted array is: \n";
    for(auto it4 : arr)
    {
        cout << it4 << " ";
    }
}
else
{
       cout << "Wrong number entered please enter again! \n";
}
}while(select != 1 && select !=2 && select !=3 && select !=4);
}

void Bubble(vector <int> &array, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void Selection(vector <int> &array, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for(int j = i; j < size; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        int temp;
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}
void Insertion(vector <int> &array, int size)
{
    for(int i = 0; i < size; i++)
    {
        int j;
        j = i;
        while(j > 0 && array[j-1] > array[j])
        {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}
void Merge(vector <int> &array, int low, int mid,int high)
{
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high)
    {
        if(array[left] < array[right])
        {
            temp.push_back(array[left]);
            left++;
        }
        else
        {
            temp.push_back(array[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(array[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(array[right]);
        right++;
    }

    for(int i = low; i <= high; i++)
    {
        array[i] = temp[i - low];
    }
}
void Ms(vector <int> &array, int low, int high)
{
    if(low >= high)
    {
        return;
    }
    int mid = (low+high)/2;
    Ms(array,low,mid);
    Ms(array,mid+1,high);
    Merge(array,low,mid,high);
}
void MergeSort(vector <int> &array, int size)
{
    Ms(array, 0 , size - 1);
}