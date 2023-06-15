/**
 * @file plugin.cpp
 * @brief The main file of the plugin
 */

#include <llapi/LoggerAPI.h>

#include "version.h"

extern Logger logger;

void PluginInit()
{
    logger.info("VoidWorldGenerator loaded!");
    logger.info("Auther: {}",PLUGIN_AUTHOR);
}
