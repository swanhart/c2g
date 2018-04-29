#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/filesystem.hpp>
#include "config.h"

using namespace std;
namespace fs = boost::filesystem;

config::config() : joystick_setting(1024,-1)
{
  boost::property_tree::ptree pt;
  if (fs::exists("~/config/m2g/m2g.conf"))
    boost::property_tree::ini_parser::read_ini("~/config/m2g.conf", pt);
  else
  {
    ofstream fo ("~/config/m2g.conf", ofstream::out);
    fo.close();
  }
  try {
    config_directory = pt.get<string>("main.config_dir");
  }
  catch(...) {
    config_directory = "~/config/m2g.conf";
  }

  string str = pt.get<string>("stuff.val");
  cout << str.length() << endl;
}

config::~config()
{
  //dtor
}
