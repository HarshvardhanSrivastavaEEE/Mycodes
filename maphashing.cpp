#include <bits/stdc++.h>
using namespace std;

int main()
{

int maxFreq = INT_MIN;
int minFreq = INT_MAX;
int maxelement = -1;
int minelement = -1;

cout << "Hello! \n";
int n;
cout << "Please enter the size of your array! \n";
cin >> n;
int arr[n];
cout << "Now lets input the elements of your array! \n";
for(int i = 0 ; i < n; i++)
{
    cout << "Please enter your element #" << i + 1 << '\n';
    cin >> arr[i];
}
cout << "Your array is: \n";

for(auto it1 : arr)
{
    cout << it1 << " ";
}
cout << '\n';
map <int,int> mpp;
for(int i = 0; i<n ; i++)
{
    mpp[arr[i]]++;
}

cout << "Now lets see how our map looks like currently: \n";

for(auto it : mpp)
{
    cout << it.first << "-->" << it.second << '\n';
}
int q;
cout << "Now please enter the number of queries! \n";
cin >> q;
while(q--)
{ 
    int x;
    cout << "Please enter the number: \n";
    cin >> x;
    cout << "Frequency of the number is: " << mpp[x] << '\n';
}

//Now lets print max and min element 

for(auto bleh : mpp)
{
    if(bleh.second > maxFreq)
    {
     maxFreq = bleh.second;
     maxelement = bleh.first;
    }

    if(bleh.second < minFreq)
    {
        minFreq = bleh.second;
        minelement = bleh.first;
    }
    //For example
    //[1,1,2,9,9,5,9,5,1,1]
    //we first iterate over
    //we arrive at first element 
    //So wait
    //First lets see what out map currently looks like
    //1--->4
    //2--->1
    //5--->2
    //9--->3
    //So we get inside for loop and begin checking statements
    //Now for 1 2nd element is 4 > INT_MIN [correct] so max element equals 1 [currently]
    //Now 4 < INT_MAX [correct]
    //So both statements are correct
    //So 1 is currently max and min element with max and min frequency as 4
    //Now we come to 2nd element that is 2
    //2 has frequency 1
    //1 > maxFreq? NO! maxFreq became 4 from INT_MIN so first if statement is false
    //Now coming to 2nd if statement 1 < minFreq? YES! minFreq became 4 from INT_MAX!
    //So currently maxFreq is 4 that is of 1.
    //And minFreq is 1 that is of 2.
    //So max elemet is 1
    //And min element is 2 CURRENTLY
    //Now coming to third element that is 5 with frequency of 2
    //coming to first if statement
    //2 > 4 ? NO! so max element is still 1 with max freq of 4
    //Now coming to 2nd if statement
    //Now 2 < 1? NO! so min element is still 2 with min freq of 1
    //Now 9
    //Checking first if statement
    // 3 > 4? NO! so max element is still 1 with freq of 4.
    //now coming to 2nd if statement
    // 3 < 1? NO! so min element is still 2 with freq of 1.


    //Finally we can say 1 has maximum frequency that is 4.
    //And 2 as minimum frequency that is 1.
    //SO lets print it

   
}
 cout << "Element with maximum frequency is: " << maxelement << " with a frequency of: " << maxFreq << '\n';
 cout << "Element with minimum frequency is: " << minelement << " with a frequency of: " << minFreq << '\n';
    
}