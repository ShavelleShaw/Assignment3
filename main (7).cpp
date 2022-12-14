#include <iostream>
#include <map>
#include <string>
#include <queue>

#include "Palindrome.h"
#include "QManipulation.h"

using namespace std;

int main() {

  //queue manipulation

  queue <string> Names;
  
  //intialize queue
  Names.push("John");
  Names.push("Amanda");
  Names.push("Mark");
  Names.push("Angela");

  //call to queue manipulation function
  move_to_rear(Names);
  
  
  //palindrome check 
  string pword;
  cout << "Please enter a word " << endl;
  cin >> pword;
  int palresults;
  
  //calls palindrome function
  palresults = checkifPalindrome( pword , 0, pword.length() - 1 );

  if (palresults == 1){
    cout << pword << " is a palindrome " << endl << endl;
  }
  else{
    cout << pword << " is not a palindrome " << endl << endl;
  }


  
  // map container declaration
  map <string, string > stateDataMap;
  
  cout<< " Map Container" << endl;

  //add data to map
  stateDataMap["Nebraska"] = "Lincoln" ; 
  stateDataMap["New York"] = "Albany";
  stateDataMap["Ohio"] = "Columbus";
  stateDataMap["California"] = "Sacramento";
  stateDataMap["Massachusetts"] = "Boston";
  stateDataMap["Texas"] = "Austin" ;

  //output information stored in map
  cout << "State Name   --->    City" << endl;
  cout << "---------------------------------" << endl;
  for(auto x: stateDataMap){
    cout << x.first << " --->  " << x.second << endl;
  }
   cout << endl; 
  
  //changes the capital of California to Los Angeles

  stateDataMap["California"] = "Los Angeles" ;
  
  //outputs updated information stored in map
  cout << "State Name   --->    City" << endl;
  cout << " ---------------------------------" << endl;
  for(auto x: stateDataMap){
    cout << x.first << " --->  " << x.second << endl;
  }

  cout << endl;
  
  //output capital name based on given user input
  cout << "Please enter a state name" << endl;
  string stateName;
  cin >> stateName; // receives state name from user
  
  cout << "The capital of " << stateName << " is " << stateDataMap[stateName] << endl;

  
  return 0;
  
}