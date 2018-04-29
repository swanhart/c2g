#ifndef CONFIG_H
#define CONFIG_H
#include <string>
#include <vector>
#include <iostream>

#define EBUTTON     0
#define EJOYSTICK1  2
#define EJOYSTICK2  3
#define EJOYSTICK3  4

#define NEXT        0
#define PREVIOUS    1
#define PAUSE       2
#define STOP        3
#define PLAY        4
#define VOL_UP      5
#define VOL_DOWN    6
#define REWIND      7
#define FFORWARD    8
#define SAYTRACK    9
#define PLAYLISTUP  10
#define PLAYLISTDN  11
#define ADDTOPLIST  12
#define SHUFFLE     13
#define POPULATE    14
#define FULLCLEAN   15

#define MINTIME     300
#define LONGTIME    5000
#define LONGERTIME  10000


class config
{
  public:
    config();
    std::string db_file;
    std::string config_directory;
    std::string music_directory;
    std::string voice_language;
    std::vector <int> joystick_setting;
    ~config();
  protected:
  private:


};

#endif // CONFIG_H
