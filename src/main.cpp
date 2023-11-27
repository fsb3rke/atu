#include <iostream>
#include "../header/commands.h"
#include "../header/handlerer.h"
#include "../header/shw.h"

int main()
{
    Shw shw;
    CommandHandlerer commandHandlerer;


    shw.sendMessages();

    commandHandlerer.executeCommands(
        COMMS
    );

    return 0;
}
