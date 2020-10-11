#include "Registration.h"

Registration::Registration()

{

  m_count = 0;
  m_studentId = 0;
  m_semester = 0;

}




Registration::~Registration()
{
    //dtor
}

unsigned Registration::getCount() const

{

  return m_count;

}

void Registration :: setCount(unsigned count){
    this-> m_count = count;

}


long Registration:: getStudentId() const{
    return m_studentId;
}

void Registration:: setStudentId(long studentId){
    this->m_studentId = studentId;
}


unsigned Registration:: getSemester() const{
    return m_semester;
}

void Registration:: setSemester(unsigned semester){
    this->m_semester = semester;
}

// total credit for all units that student studied
unsigned Registration::getCredits() const

{

  unsigned sum = 0;

  for(unsigned i = 0; i < m_count; i++)

    sum += m_unit[i].getCredits();



  return sum;

}

Unit Registration::getUnit(unsigned index){
  return m_unit[index];
}

void Registration::setUnit(unsigned index, Unit &u){
  this->m_unit[index] = u;
}
