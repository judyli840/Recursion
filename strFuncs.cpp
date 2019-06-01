#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  string str1 ="";
  string str2 ="";
  int lens = s1.length();
  int lens2 = s2.length();

  for(int i=0; i<lens; i++){
	  if (isalnum(s1[i])) {
      char c = tolower(s1[i]);
      str1 = str1 + c;
    }
  }
  for(int i=0; i<lens2; i++){
  	  if (isalnum(s2[i])) {
      char c = tolower(s2[i]);
      str2 = str2 + c;
    }
  }
  
  int len1 = str1.length();
  int len2 = str2.length();
	  

  if(len1 != len2)
	  return false;

   while (str1.length() > 0) {
    char c = str1[0];
    if (str2.find(c) != string::npos) {
      str1 = str1.erase(0, 1);
      str2 = str2.erase(str2.find(c), 1);
	}
	else{
		return false;
	}
  }


  return true;
}



/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
   int len = s1.length();
   int mid = len/2;
   string str = s1;
  
   for(int i=0; i<len;i++){
	   str[i]=tolower(str[i]);
   }
  

   for(int i=0; i<mid; i++){
   	if(!(str[i] == str[len-1-i]))
		return false;
   }


  return true;
}
