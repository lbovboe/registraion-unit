#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
    this->m_name = "";
    this->m_id = "";
    this->m_credits = 0;
}

Unit::~Unit()
{
    //dtor
}

Unit ::Unit(string name, string id, unsigned credits)
{
    this->m_name = name;
    this->m_id = name;
    this->m_credits = credits;
}

string Unit ::getName() const
{
    return m_name;
}

void Unit ::setName(string name)
{
    this->m_name = name;
}

string Unit::getId() const
{
    return m_id;
}

void Unit::setId(string id)
{
    this->m_id = id;
}

unsigned Unit ::getCredits() const
{
    return m_credits;
}

void Unit::setCredits(unsigned credits)
{
    this->m_credits = credits;
}

void Unit::printUnit() const
{
    std::cout << "The name is : " << m_name << std::endl
              << "The id is : " << m_id << std::endl
              << "The credits is: " << m_credits << std::endl;
}
