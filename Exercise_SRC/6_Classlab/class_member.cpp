/*
 * =====================================================================================
 *
 *       Filename:  class_member.cpp
 *
 *    Description:  Class member experiment program
 *
 *        Version:  1.0
 *        Created:  02/01/2013 11:04:14 AM
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

class poc_mon
{
public:
  poc_mon(string, int);
  int get_health_status();
  void set_health(int);
  string get_name();

private:
  int m_health;
  string m_name;
};

poc_mon::poc_mon(string name, int health):
m_health(health)

{
  //m_health(health);
  //m_name(name);
  m_name = name;
  cout << "A new pocket monster is born" << endl;
  cout << "Name: " << m_name << "\t" << "Health: " << m_health << endl;
}

int poc_mon::get_health_status()
{
  return m_health;
}

string poc_mon::get_name()
{
  return m_name;
}

void poc_mon::set_health(int health)
{
  if(health < 0)
  {
    cout << "Set health under 0 is illegal." << endl;
  }

  else
  {
    m_health = health;
  }
}


int main()
{
    cout << "Hello world!" << endl;

    poc_mon p1("Xman", 90);

    poc_mon p2("Yman", 100);

    poc_mon p3("Zman", 95);

    cout << "Get health index:" << endl;

    cout << "Health for " << p1.get_name() << " is " << p1.get_health_status() << endl;

    p2.get_health_status();
    cout << "Health for " << p2.get_name() << " is " << p2.get_health_status() << endl;

    cout << "Set health index: " << endl;
    p3.set_health(20);

    cout << "Health for " << p3.get_name() << " is " << p3.get_health_status() << endl;

    p1.set_health(-2);

    cout << "Health for " << p1.get_name() << " is " << p1.get_health_status() << endl;

    return 0;
}

