/*
 * =====================================================================================
 *
 *       Filename:  hangman.cpp
 *
 *    Description:  The game of guessing word
 *
 *        Version:  1.0
 *        Created:  01/19/2013 08:45:14 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KnightV (KV), kevinwang1988@smail.hust.edu.cn
 *   Organization:  FSF
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <unistd.h>
using namespace std;

//define the Max number of wrong trial
const int MAX_WRONG = 8;
vector<string> words;
int wrong_trail = 0;

//initialize word pool
int init_wordpool()
{
    words.push_back("GAME");
    words.push_back("HANGMAN");
    words.push_back("LEVEL");
    words.push_back("LOVE");
    words.push_back("HELLO");
    words.push_back("STARTREK");
    words.push_back("DOCTOR");
    words.push_back("PROGRAMMER");
    words.push_back("ETC");
    words.push_back("LEVEL");
    words.push_back("GUESS");

    return 0;
}

void init_wordrec(string d_string, string& g_string, string& g_usedstring)
{
  //initialize the shown word with "-"
  string temp(d_string.size(), '-');
  g_string = temp;
  g_usedstring = "";
}

char get_guess()
{
    char guess;
    cout << "Input your guess:" << endl;
    cin >> guess;
    return toupper(guess);
}

void show_status(string g_string, int g_wnum)
{
  cout << "The string guessed is: " << endl;
  cout << g_string << endl;
  cout << "You still have " << MAX_WRONG - g_wnum << " times to guess" << endl;
}

void end_game(string d_string, int g_wnum)
{
    if (wrong_trail == MAX_WRONG)
  {
    cout << "You lose, your man is hanged!" << endl;
  }
  else
  {
    cout << "You win, your man is saved!" << endl;
  }
  cout << "The word is " << d_string << endl;
}

// update the guess string list
void update_list(char g_input, string& g_string, string d_string)
{
  for(int i = 0; i < d_string.size(); ++i)
  {
      if(g_input == d_string[i])
      {
        g_string[i] = g_input;
      }
  }

}
// judge the input
void judge_input(char g_input, string& g_string, string d_string)
{
    if(d_string.find(g_input) != string::npos)
    {
      cout << "Right, the word " << '"' << g_input << '"' << " you input is in." << endl;
      //Update the so_far
      update_list(g_input, g_string, d_string);
    }
    else
    {
      cout << "Wrong guess. " << g_input << " Not in." << endl;
      ++ wrong_trail;
    }
}


int main()
{
  string so_far;
  string used_word;
  char guess;

  //initialize the word pool
  if (init_wordpool())
  {
    cout << "Something wrong with the initializing process. Program terminated" << endl;
    return 1;
  }

  //Get a random word
  srand(static_cast<unsigned int>(time(0)));
  random_shuffle(words.begin(), words.end());
  const string final_word = words[0];

  init_wordrec(final_word, so_far, used_word);

  //Show welcoming message
  cout << "************Welcome to Hangman game, Good luck************" << endl;

  //Start game
  while((so_far != final_word) && (wrong_trail < MAX_WRONG))
  {
    show_status(so_far, wrong_trail);

    // Find the guess of player
    guess = get_guess();

    while(used_word.find(guess) != string::npos)
    {
      cout << "You have guessed " << guess << endl;
      cout << "Input your guess: " << endl;
      cin >> guess;
      guess = toupper(guess);
    }

    used_word += guess;

    judge_input(guess, so_far, final_word);

    usleep(300);
    cout << "\n";
    cout << "------------Next round------------" << endl;

    }

  end_game(final_word, wrong_trail);

  return 0;

  }
