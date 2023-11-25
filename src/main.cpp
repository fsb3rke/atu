#include <iostream>
#include "../header/commands.h"
#include "../header/handlerer.h"

int main()
{
    CommandHandlerer commandHandlerer;

    commandHandlerer.executeCommands(
        COMMS
    );

    return 0;
}
