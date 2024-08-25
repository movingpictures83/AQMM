#ifndef AQMMPLUGIN_H
#define AQMMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class AQMMPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "AQMM";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
