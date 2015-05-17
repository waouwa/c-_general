/*
 * Credits to "Loki Astari" on stackoverflow.com
 * 2015-05-16
 *
 */

#ifndef singleton_h_
#define singleton_h_

#include <cstdlib>

class Singleton {
  public:
    static Singleton &getInstance() {
      static Singleton instance;
      return instance;
    }

  private:
    Singleton() {};
    Singleton(Singleton const &) = delete;
    Singleton &operator=(Singleton const &) = delete;
}

#endif
