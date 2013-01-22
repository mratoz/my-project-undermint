/*
 * =====================================================================================
 *
 *       Filename:  madlib.cpp
 *
 *    Description:  Make up a story by the simple input from player
 *
 *        Version:  1.0
 *        Created:  01/22/2013 06:48:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KnightV (KV), kevinwang1988@smail.hust.edu.cn
 *   Organization:  FSF
 *
 * =====================================================================================
 */

#include<iostream>
#include<string>
#include<vector>
#include<unistd.h>
using namespace std;

void show_welcomemsg();

string get_input(string);

//int get_input(int);
void fake_gen_story();
void tell_story(string when, string who, string where, string what);

int main()
{
  string when;
  string where;
  string who;
  string what;

  //get the user input
  when = get_input("Input the time(fmt DD/MM/YYYY):");
  where = get_input("Input the place:");
  who = get_input("Input the hero:");
  what = get_input("Input the affair:");
  
  // Looks like generate story
  fake_gen_story();

  //start to tell the story
  tell_story(when, where, who, what);
  return 0;
}

void show_welcomemsg()
{
  cout << "------------Welcome to the story bot-------------" << endl;
}

string get_input(string input_request)
{
  string input;
  cout << input_request << endl;
  //cin >> input;
  getline(cin, input);
  return input; 
}

void fake_gen_story()
{
  cout << "--------------------------------------" << endl;
  cout << "start to generate story" << endl;
  sleep(2);
  cout << "Done!" << endl;
  cout << "Story as follows:" << endl;
  cout << "**************************************" << endl;
}

void tell_story(string when, string where, string who, string what)
{
  cout << "Once upon a time, actuallly the exact time is " << when << endl;
  cout << "The " << who << " went to " << where << endl;
  cout << "They find that " << what << endl;
}
