/*
    Aleksandr Movsesyan
    CS 110 A
    Craig Persiko
    Practice Problem 6
    pp6.cpp

    Lets the user type a word and check if it has a double letter
  */

#include <iostream>
using namespace std;

void get_word ( char word [], int size, int& num_used);
// stores the word in the character and sends in the size

int main ()
{
  const int SIZE = 21;
  int num_used = 0;
  char word [SIZE];
  bool letter_twice = false;

  get_word ( word, SIZE, num_used );

  cout << "The word you entered: '";
  for ( int index = 0; index < num_used; index++)
    cout << word [index];
  for ( int index = 0; index < num_used; index++)
  {
    if ( word [index+1] == word [index] )
      letter_twice = true;
  }
  if ( letter_twice == true )
    cout << "' has a double letter.\n" << endl;
  else
    cout << "' doesn't have a double letter\n" << endl;

  return 0;
}

// stores the word in the character and sends in the size
void get_word ( char word [], int size, int& num_used)
{

  int index = 0;
  char word_to_check;

  cout << "\nPlease enter a word, terminated by a period: ";
  cin >> word_to_check;

  while (index < size)
  {
    if ( word_to_check == '.' ) break;
    word [index] = word_to_check;
    index++;
    num_used++;
    cin >> word_to_check;
  }
}
