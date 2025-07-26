#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6, 7};
    cout << "BEFORE rotating array was:\n";
    for (int it : array)
    {
        cout << it << " ";
    }
    cout << "\n\n";

    int times;
    cout << "Enter how many times you want to rotate by left: ";
    cin >> times;

    // In case k > size of array
    times = times % array.size();

    vector<int> storedarray;

    // Store first `times` elements
    for (int i = 0; i < times; i++)
    {
        storedarray.emplace_back(array[0]); // Always pick from index 0
        array.erase(array.begin());         // Erase from the front
    }

    // Append stored elements at end
    for (int j = 0; j < storedarray.size(); j++)
    {
        array.emplace_back(storedarray[j]);
    }

    cout << "\nNow the array looks like:\n";
    for (auto it1 : array)
    {
        cout << it1 << " ";
    }
    cout << '\n';
}
