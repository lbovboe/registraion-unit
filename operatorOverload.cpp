
#include "operatorOverload.h"

// out put string for the whole unit
ostream &operator<<(ostream &stream, const Unit &u)
{
    stream << "Your name is : " << u.getName() << "\n"
           << "Your id is : " << u.getId() << "\n"
           << "Your credit is: " << u.getCredits() << endl;
    return stream;
}

istream &operator>>(istream &input, Unit &u)
{
    string name, id, credit;
    getline(input, name, ' '); // Get line with delimiter
    getline(input, id, ' ');
    getline(input, credit, '\n');

    u.setName(name);
    u.setId(id);
    u.setCredits(stoi(credit));

    return input;
}
// output string for whole registration info
ostream &operator<<(ostream &stream, const Registration &r)
{
    stream << "Your Murdoch Student Id is : " << r.getStudentId() << "\n"
           << "The semester is : " << r.getSemester() << "\n"
           << "Total number of Units: " << r.getCount() << endl;
    return stream;
}

istream &operator>>(istream &input, Registration &r)
{
    string id, semester, count;
    getline(input, id, ' '); // Get line with delimiter
    getline(input, semester, ' ');
    getline(input, count, '\n');

    r.setStudentId(stoi(id));
    r.setSemester(stoi(semester));
    r.setCount(stoi(count));

    for (int i = 0; i < r.getCount(); i++)
    {
        //Unit u = r.getUnit(i);
        input >> r.getUnit(i);
    }

    return input;
}