#include <iostream>
int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

//Luhn Algorithm
//1.Double every second digit from right to left
//If doubled number is 2 digits, split them
//2.Add all single digits from step 1
//3.Add all odd numbered digits from right to left
//4.Sum results from steps 2 and 3
//5.If step 4 is divisible by 10, # is valid

//Lets see an example
//Suppose the card number is 6011000990139424
//Ok lets start.
//Lets first split them into groups of 4
// 6011 0009 9013 9424
//Now lets erase the numbers we wont be needing
// 6 1  0 0  9 1  9 2
//Now lets follow step 1.
// 12  2   0  0   18   2  18  4
//Now split the number which is 2 digits
// 1 2    2    0   0    1 8     2  1 8   4
//Now lets follow step 2 that is add everyhting
//We get 29
//Now lets follow step 3[we need to add all odd numbered digits from right to left IN THE ORIGINAL number]
//So lets write the numbers that we are concerned with
// 0 1    0 9     0 3     4 4 [All odd numbered digits from right to left]
//Now add em up
//We get 21
//Now we sum the results from step 2 and step 3
//We get 50
//Now lets follow step 5
//50 is divisible by 10 so our card is valid

int main()
{
std::string cardNumber;
int result = 0;
std::cout << "Enter a credit card number #: ";
std::cin >> cardNumber;

result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
if(result % 10 == 0)
{
std::cout << "Card is valid!" << '\n';
}
else{
    std::cout << "Card is not valid!" << '\n';
}
}
int getDigit(const int number)
{
    //Suppose the number is 18
    //18 % 10 = 8
    //18/10 = 1.8 but integer so 1
    //1 % 10 = 1
    //So basically 8 + 1 = 9
    //Suppsoe we get 26
    //26 % 10 = 6
    //26/10 = 2[int value]
    //2 % 10 = 2 [int division]
    //So we splitted 26 into 6 and 2 
    return number % 10 + (number/10 % 10); //We sum because we need sum all digits from step 1
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >=0; i-=2)
    {
          sum += cardNumber[i] - '0';
    }
    return sum ;
}
int sumEvenDigits(const std::string cardNumber)
{

    int sum = 0;
    //We are going to treat the string as an array
    //Now the last digit will be size - 1
    //But we need sum of even digit numbers FROM right to LEFT
    //So we start from 2nd last number as it will be the 1st even digit
    //That is 2nd place.
    for(int i = cardNumber.size() - 2; i >=0; i-=2)
    {
      //sum += getDigit(cardNumber[i]*2); <--- We should have written this BUT WE DONT
      //here is why
      //We are currently working with a string of characters that is our cardNumber.
      //You can also treat string as an array of characters [VERY IMPORTANT]
      //Each character according to the asci table has an assosciated integer value
      //0 has decimal representation of 48
      //1 has decimal representation of 49 and so on...
      //if type what we did we will end up working with its decimal representation
      //So suppose there is number 0 in our cardnumber
      //It will be registered as 48
      //So to avoid we subtract our number from '0'.
      //Let me explain why 
      //Suppose we have number 1 in our cardNumber
      //According to ascii it will get converted to 49 by subtracting '0'
      //It should look Equivalent to 49 -'0'
      //That actually is 49 - 48
      //So lets see the conversion once more
      // 1 - '0' is actually 49 - 48
      // So we actually get the final result as 1.
      //We could also subtract it from 48 its same thing.
      //Now lets continue.
      sum += getDigit((cardNumber[i] - '0')*2);//We multiplied it by 2 because thats what step 1 is.
    }
    return sum;
}
