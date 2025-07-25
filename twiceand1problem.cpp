#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> array = {1,3,5,1,2,2,3,7,5,6};

    map<int,int> mpp;
    for(int i = 0; i < array.size() ; i++)
    {
        mpp[array[i]]++;
    }

    for(auto num : array)
    {
        if(mpp[num] == 1)
        {
            cout << num;
            cout << '\n';
        }

    }
}