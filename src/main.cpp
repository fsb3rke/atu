#include <iostream>
#include "../header/commands.h"
#include "../header/handlerer.h"

int main()
{
    CommandHandlerer commandHandlerer;

    commandHandlerer.executeCommands({
        WIN_MONITOR_TIMEOUT_REMOVE,
        WIN_STAND_BY_TIMEOUT_REMOVE,
        WIN_ON_SCREEN_KEYBOARD
    });

    return 0;
}
