#ifndef __PERSON__H__
#define __PERSON__H__

class Person : public IPerson {
public:
  Person(std::string name) : name(name){};
  Person(){};

  std::string getName() const { return name; };

protected:
  std::string name;
};
#endif /** __PERSON__H__ */