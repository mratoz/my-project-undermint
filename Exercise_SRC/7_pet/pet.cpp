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
using namespace std;
// define the pet class
class pet
{
	public:
		pet(int health = 0,  int happiness = 0);
		void talk();
		void eat(int food_amount);
		void play(int fun_amount);
	private:
		int m_health;
		int m_happiness;

		int get_status() const;
		void pass_time(int time = 1);
}

pet::pet(int health,  int happiness):m_health(health), m_happiness(happiness)
{};


