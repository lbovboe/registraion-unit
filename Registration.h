#ifndef REGISTRATION_H
#define REGISTRATION_H


#include <iostream>

#include "Unit.h"

using namespace std;


class Registration
{
    public:
        Registration();
        virtual ~Registration();

        unsigned getCredits() const;

        //void setCredits(unsigned credits);


        unsigned getCount() const;

        void setCount(unsigned count);


        long getStudentId() const;

        void setStudentId(long id);

        unsigned getSemester() const;

        void setSemester(unsigned semester);

        Unit getUnit(unsigned index);


    private:
        long m_studentId;             // student ID number

        unsigned m_semester;          // semester year, number

        unsigned m_count;             // number of courses

        Unit m_unit[10];        // array of Unit
};

#endif // REGISTRATION_H
