#ifndef user_h_
#define user_h_

#include <cstdlib>
#include "user_data.h"
#include "user_settings.h"

class User {
  private:
    /* permanent values */
    const std::string userID; // unique hashed value
    const std::string date_created; // will probably change to custom time class later on

    /* mutable values */
    UserData &userData; // any static data 
    UserSettings &userSettings; // any mutable settings and variables
    UserPermissions &userPermissions; // user restrictions based on above two
  
  public:
    User();
    User(const UserData &userData);
    User(const UserData &userData, const UserSettings &UserSettings);
    User(const UserData UserData userDatauserData, const UserSettings &userSettings, const UserPermissions &userPermissions);
    ~User();
    
    User(const User &copy_user);
    User &operator= (const User &copy_user);
    bool operator== (const User &param_user) const;
    bool operator!= (const User &param_user) const;
    
    const std::string getUserID(const User &user_ref);
    const std::string getDateCreated(const User &user_ref);
    &UserData setUserData(const UserData &user_data);
    

}

#endif
