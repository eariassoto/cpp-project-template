#ifndef __PERSON__H__
#define __PERSON__H__
#include <IPerson.h>

class Person : public IPerson {
public:
  Person(std::string name);
  ~Person(){};

  std::string getName() const { return name; };

protected:
  std::string name;
};
#endif /** __PERSON__H__ */