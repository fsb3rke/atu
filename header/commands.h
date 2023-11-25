#pragma once

#ifndef COMMANDS_H_
#define COMMANDS_H_

#define WIN_ON_SCREEN_KEYBOARD "osk"
#define WIN_STAND_BY_TIMEOUT_REMOVE "powercfg -change standby-timeout-ac 0"
#define WIN_MONITOR_TIMEOUT_REMOVE "powercfg -change monitor-timeout-ac 0"

#define COMMS { WIN_ON_SCREEN_KEYBOARD, WIN_STAND_BY_TIMEOUT_REMOVE, WIN_MONITOR_TIMEOUT_REMOVE }

#endif // COMMANDS_H_