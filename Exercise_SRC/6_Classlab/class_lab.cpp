/*
 * =====================================================================================
 *
 *       Filename:  class_lab.cpp
 *
 *    Description:  Class usage learning lab. For test and experiment.
 *
 *        Version:  1.0
 *        Created:  01/31/2013 11:04:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KnightV (KV), kevinwang1988@smail.hust.edu.cn
 *   Organization:  FSF
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;

class pock_mon
{
public:
  string m_name;
  pock_mon(int health, string name);
  int m_health;
  void greet();
};

pock_mon::pock_mon(int health, string name)
{
  m_name = name;
  m_health = health;
  cout << "A new monster is born: " << endl;
  cout << "Code: " << m_name << "\t" << "Health: " << m_health <<endl;
}

void pock_mon::greet()
{
  cout << "Hi, I am a pocket monster -- "
  << m_name << " . " << "Health: " << m_health << endl;
}

int main()
{
    cout << "Hello world!" << endl;
/*
    pock_mon pm1;
    pock_mon pm2;

    pm1.m_name = "Juda";
    pm1.m_health = 100;

    pm2.m_name = "Codegear";
    pm2.m_health = 49;

    pm1.greet();

    pm2.greet();


*/

pock_mon p3(100, "XMAN");

p3.greet();

p3.m_health = 60;

p3.greet();

return 0;
}
