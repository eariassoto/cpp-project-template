#ifndef __IPERSON__H__
#define __IPERSON__H__
#include <string>

class IPerson {
public:
  virtual ~IPerson(){};
  virtual std::string getName() const = 0;
};
#endif /** __IPERSON__H__ */