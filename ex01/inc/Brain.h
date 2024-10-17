#pragma once

#include <iostream>
#include <string>

class Brain {
  public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    void setIdea(const std::string& ideas, int index);
    const std::string getIdea(int index) const;

  private:
    std::string ideas_[100];
};
