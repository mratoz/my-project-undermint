/*
 * =====================================================================================
 *
 *       Filename:  pet.cpp
 *
 *    Description:  Pet feeding program
 *
 *        Version:  1.0
 *        Created:  02/06/2013 10:13:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KnightV (KV), kevinwang1988@smail.hust.edu.cn
 *   Organization:  42Myth
 *
 * =====================================================================================
 */
#include<iostream>
#include<string>
using namespace std;
// define the pet class
class pet
{
	public:
		pet(int health = 0,  int happiness = 0,  string name = "GURU");
		void talk();
		void eat(int food_amount);
		void play(int fun_amount);
	private:
		int m_health;
		int m_happiness;
    string m_name;
		int get_status() const;
		void pass_time(int time = 1);
}
// constructor for class pet.
pet::pet(int health,  int happiness):m_health(health), m_happiness(happiness),  m_name(name)
{};

// get the status of pet(Higher, better)
int pet::get_status() const
{
	return (m_health + m_happiness);
}

// simulate the time passing effect on health and happiness
void pass_time(int time)
{
	m_health -= time;
	m_happiness -= time;
}

// Get the status of pet through talk.
void talk()
{
  cout << "I am " << m_name << ". " << endl;
  int status = get_status();
  if(status > 15)
	{
		cout << "I feel excellent. " << endl;
	}
	else if(status > 10)
	{
		cout << "I feel OK. " << endl;
	}
	else if(status > 5)
	{
		cout << "I feel bad. " << endl;
	}
	else
	{
		cout << "I feel worse. " << endl;	
	}

	pass_time();

}

// play class function is used to increase the value of happiness
void pet::play(int fun_amount)
{
	cout << "I love you, my master" << endl;
  if(m_happiness < 0)
	{
	  m_happiness = 0;
	}
  else
	{
		m_happiness += fun_amount;
	}
  pass_time();
	cout << "I had a lot of fun. Thanks, my master" << endl;
}

// eat class function is used to increase the value of health
void pet::eat(int food_amount)
{
	cout << "Thanks, God. For all the food you offered to us" << endl;
	m_health += food_amount;
	pass_time();
	cout << "I feel that I am growing up now,  my master" << endl;
}

int main()
{
  // poc_mon the monster. lol
	pet poc_mon;


}

