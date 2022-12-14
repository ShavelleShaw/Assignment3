#include <iostream>


using namespace std;


int checkifPalindrome(string word, int firstindex, int lastindex){

//this function returns 0 if any of the characters in the strong does not match with its palindrome character

  
  if(firstindex < lastindex + 1){
    firstindex ++; // increments first index
    lastindex --; //decrements last index

    return checkifPalindrome(word, firstindex, lastindex); //recursion
    
  } 

  if(firstindex == lastindex){
    return 1;
  }

  if(word[firstindex] != word[lastindex]){
    return 0;
  }
  return 1;
}