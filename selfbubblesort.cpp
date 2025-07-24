#include <iostream>

void sort(int sort2[],int size);
int main()
{
  int n;
  int temp;
  std::cout << "Hello! \n";
  std::cout << "Please enter the size of your array! \n";

  std::cin >> n;

  int arr[n];
  std::cout << "Now lets input the elements remember the elements are integers! \n";

  for(int i = 0; i < n; i++)
  {
    std::cout << "Enter your element #" << i + 1;
    std::cin >> arr[i];
    std::cout << '\n';
  }
  std::cout << "Your elements are: " ;
  for(auto it: arr)
  {
    std::cout << it << ",";
  }
  std::cout << '\n';
  sort(arr,n);

  std::cout << "Your sorted array is: \n";
  for(auto it1: arr)
  {
    std::cout << it1 << ",";
  }
  std::cout << '\n';

}

void sort(int sort2[],int size)
{
int temp;
for(int i = 0 ; i < size - 1; i++)
{
    for(int j = 0; j < size - i - 1; j++)
    {
        if(sort2[j] > sort2[j+1])
        {
         temp = sort2[j];
         sort2[j] = sort2[j+1];
         sort2[j+1] = temp;
        }
    }

}

}