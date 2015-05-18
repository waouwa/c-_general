#include <cstdlib>
#include "user.h"
#include <chrono>
#include <ctime>

using namespace std;

class User {
  private:
    string userID;
    string date_created;
    UserData &userData;
    UserSettings &userSettings;
    UserPermissions &userPermissions;

  public:
    explicit User() {
      this.userID = "some hashed value";
      this.date_created = std::ctime(
          &std::high_resolution_clock::to_time_t(
            std::chrono::high_resolution_clock::now()));
    }
    explicit User() {

}
