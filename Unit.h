#ifndef UNIT_H
#define UNIT_H

#include <string>
using namespace std;
class Unit
{
public:
    Unit();
    Unit(string name, string id, unsigned credits);

    virtual ~Unit();

    string getName() const;

    void setName(string name);

    string getId() const;

    void setId(string id);

    unsigned getCredits() const;

    void setCredits(unsigned credits);

    void printUnit() const;

    //void readFileUnit(string fileName);

private:
    string m_name;
    string m_id;
    unsigned m_credits;
};

#endif // UNIT_H
