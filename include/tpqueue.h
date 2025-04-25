// Copyright 2022 NNTU-CS
#include <list>
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T>
class TPQueue {
 private:
    std::list<T> lists;
 public:
    void push(const T& element) {
      auto ukaz = lists.begin();
      while (ukaz < lists.end() && ukaz.prior >= element.prior) {
        ukaz++;
      }
      lists.insert(ukaz, element);
    }
    T pop() {
      T DelElement = lists.front();
      lists.pop_front();
      return DelElement;
    }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
