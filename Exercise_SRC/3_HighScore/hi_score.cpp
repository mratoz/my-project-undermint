/*
 * =====================================================================================
 *
 *       Filename:  hi_score.cpp
 *
 *    Description:  Exercise Program for High Score
 *
 *        Version:  1.0
 *        Created:  01/17/2013 07:20:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KnightV (KV), kevinwang1988@smail.hust.edu.cn
 *   Organization:  FSF
 *
 * ==========================eee===========================================================
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
  vector<int>::const_iterator iter;

  cout << "Get a list of scores" << endl;
  vector<int> scores;
  scores.push_back(1500);
  scores.push_back(3500);
  scores.push_back(7500);

  cout << "High scores:\n" ;
  for( iter = scores.begin(); iter != scores.end(); ++iter)
    {
      cout << *iter << endl;
    }

  return 0;

}











