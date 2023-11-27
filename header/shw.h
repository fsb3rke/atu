#pragma once

#ifndef SHW_H_
#define SHW_H_

#include <vector>
#include <iostream>
#include <string>
#include "colors.h"
#include <Windows.h>

extern std::string Text(std::string x);
class Shw {
private:
    std::vector<std::string> logs = {
        Text("AUTHOR : fsb3rke (BERKE AVCI)"),
        Text("Started 'osk' for int."),
        Text("Started 'systemcmd-sysusers.service' for details."),
        Text("Started wdev Kernel Device Manager..."),
        Text("Listening on Load/Save RP Kill Switch Status /dev/rfkill Watch."),
        Text("Reached target Sound Card."),
        Text("Found Device WDC_WD10EZEK-003M5A9 3."),
        Text("Reached target Local File Systems (Pre)."),
        Text("Mounted Mount unit for termius-app, revision 29."),
        Text("Mounted Mount unit for termius-app, revision 28."),
        Text("Mounted Mount unit for core, revision 6405."),
        Text("Started Create Volatile Files and Directories."),
        Text("Started Daily Cleanup of Temporary Directories."),
        Text("Listening on D-Bus System Message Bus Socket."),
        Text("Setting on Powercfg Standby Option to ZERO."),
        Text("Setting on Powercfg Window Option to ZERO."),
        Text("Fetching all informations about 'atu'."),
        Text("Tell Plynmouth To Write Out Runtime Data."),
        Text("Timers."),
        Text("Finished Save/Restore Sound Card State"),
        Text("Load/Save Screen Backlight Brightness of blacklight::intel_back."),
        Text("Stopped Login Service."),
        Text("Finished Permit User Sessions"),
        Text("Thx for used 'atu'.")
    };

    std::vector<int> log_durations = {
        1121,
        1000,
        500,
        400,
        300,
        200,
        100,
        100,
        232,
        23,
        342,
        120,
        432,
        328,
        283,
        231,
        444,
        121,
        123,
        500,
        1200,
        704,
        404,
        1,
    };

public:
    void sendMessages();
};

#endif // SHW_H_