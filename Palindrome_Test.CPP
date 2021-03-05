using namespace std;

#include <iostream>
#include <string>
#include <algorithm>


//Create a function to determine if a word or phrase is a palindrome.
//The function will take as input a string and return a boolean that is true if the word or phrase is a palindrome and false otherwise.
//Examples of palindromes are :

//1. 1881
//2. Dad
//3. Step on no pets

bool isPalin_usingLen(string strIn)
{
	for (int iInd = 0; iInd <= strIn.length() / 2; iInd++) {
		if (tolower (strIn[iInd]) != tolower(strIn[strIn.length() - 1 - iInd]))
			return false;
	}

	return true;
}

/*This is function that takes the input is a word or phrase*/
bool isPalindrome(string strIn)
{
	/*Compare the first half of the string with the latter half, in reverse*/
	if (equal(strIn.begin(), strIn.begin() + strIn.size() / 2, strIn.rbegin()))
		return true;
	else
		return false;

}
/*Test */
int main()
{
	if (isPalin_usingLen("Step on no pets") == true)
		std::cout << "Yes-> String is Palidrome\n";
	else
		std::cout << "No->String is not Palindrome";
}