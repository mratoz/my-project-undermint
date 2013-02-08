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
		pet(int health = 10,  int happiness = 6,  string name = "GURU");
		void talk();
		void eat(int food_amount);
		void play(int fun_amount);
	private:
		int m_health;
		int m_happiness;
        string m_name;
		int get_status() const;
		void pass_time(int time = 1);
};
// constructor for class pet.
pet::pet(int health,  int happiness, string name):m_health(health), m_happiness(happiness),  m_name(name)
{};

// get the status of pet(Higher, better)
int pet::get_status() const
{
	return (m_health + m_happiness);
}

// simulate the time passing effect on health and happiness
void pet::pass_time(int time)
{
	m_health -= time;
	m_happiness -= time;
}

// Get the status of pet through talk.
void pet::talk()
{
  cout << "I am " << m_name << ". " ;
  int status = get_status();
  cout << "My status is " << status << ". ";
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
  // If m_happiness 0, the passtime would affect the result.So nomatter how many
	// times you call, if it starts with the value less than 0. 
	// Happness would always be 0.
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
  poc_mon.talk();

	int choice;
	do
	{
		// Menu
        cout << "=======================================" << endl;
		cout << "Poc_Mon feeding game menu." << endl;
		cout << "0. Quit" << endl;
		cout << "1. Listen to your Poc_Mon" << endl;
		cout << "2. Feed your Poc_Mon" << endl;
		cout << "3. Play with your Poc_Mon" << endl;
        cout << "=======================================" << endl;
		// Hint for choice
		cout << "Your choice: ";
		cin >> choice;
    cout << choice << endl;

		switch(choice)
		{
			case 0:
				cout << "Bye, my master" << endl;
				break;
			case 1:
				poc_mon.talk();
				break;
			case 2:
				poc_mon.eat(4);
				break;
			case 3:
				poc_mon.play(6);
				break;
			default:
				cout << "Your choice is invalid,  please input the right one." << endl;
		}
	
	} while(choice != 0);

	return 0;

}

