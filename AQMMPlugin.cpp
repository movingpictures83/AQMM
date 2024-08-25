#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "AQMMPlugin.h"

void AQMMPlugin::input(std::string file) {
   readParameterFile(file);
}

void AQMMPlugin::run() {}

void AQMMPlugin::output(std::string file) {
//aqmm  -a AS_metagenome -b AS_metatranscriptome -m meta_data.txt -n 12 -o testout2

       	std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "aqmm -a "+PluginManager::addPrefix(myParameters["dna"])+" -b "+PluginManager::addPrefix(myParameters["rna"])+" -m "+PluginManager::addPrefix(myParameters["metadata"])+" -n "+myParameters["n"]+" -o "+file;
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<AQMMPlugin> AQMMPluginProxy = PluginProxy<AQMMPlugin>("AQMM", PluginManager::getInstance());
