#ifndef EQUATION_HPP
#define EQUATION_HPP

class Compound {
public:
  std::map<std::string, int> elements;
};

class Equation {
public:
  std::map<std::string, int> reactants;
  std::map<std::string, int> products;
};

#endif
