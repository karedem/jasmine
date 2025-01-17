#ifndef JASMINE_METHODS_PLUGIN_H
#define JASMINE_METHODS_PLUGIN_H

#include <windows.h>
#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>
#include <flutter/standard_method_codec.h>
#include <VersionHelpers.h>
#include <map>
#include <memory>
#include <sstream>
#include "../rust.h"

void MethodsPluginRegisterWithRegistrar(
        FlutterDesktopPluginRegistrarRef registrar);


#endif //JASMINE_METHODS_PLUGIN_H
