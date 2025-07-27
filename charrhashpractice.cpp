#include <iostream>
using namespace std;
void withoutusingascii(string word);
void withusingascii(string word);
int main()
{
   string s;
   cout << "Enter your word \n";
   cin >> s;
   int ask;
   cout << "Enter 1 for using without ascii values \n";
   cout << "Enter 2 for using ascii values \n";

   cin >> ask;

   if(ask == 1)
   {
    withoutusingascii(s);
   }
   else if(ask == 2)
   {
    withusingascii(s);

   }
   else
   {
     return 0; 
   }

}
void withoutusingascii(string word)
{


   int hash[122] = {0}; 

   for(int i = 0; i < word.size(); i++)
   {
        hash[word[i]] += 1;
   }

   char find;

   int x;
   cout << "Enter the number of queries \n";
   cin >> x;

   for(int i = 0; i < x; i++)
   {
     cout << "Enter your Querie number #" << i+1 << " ";
     cin >> find;
     cout << "Frequency of " << find << " is " << hash[find];
     cout << '\n';
   }

}

void withusingascii(string word)
{

   int hash[26] = {0}; 

   for(int i = 0; i < word.size(); i++)
   {
        hash[word[i] - 'a'] += 1;
   }

   char find;

   int x;
   cout << "Enter the number of queries \n";
   cin >> x;

   for(int i = 0; i < x; i++)
   {
     cout << "Enter your Querie number #" << i+1 << " ";
     cin >> find;
     cout << "Frequency of " << find << " is " << hash[find - 'a'];
     cout << '\n';
   }


}