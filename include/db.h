#ifndef DB_H
#define DB_H

#include <sqlite3.h>
#include <string>
#include "config.h"

class db
{
  public:
    db();
    struct track {
      std::string path;
      std::string title;
      std::string artist;
      std::string album;
      int year;
      int track;
      double rating;
      std::string filehash;
    };

    static config conf;

    virtual ~db();
  protected:
  private:
    sqlite3 *sql;

};

#endif // DB_H
