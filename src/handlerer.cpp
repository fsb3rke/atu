#include "header/handlerer.h"

void CommandHandlerer::executeCommands(std::vector<std::string> commands) {
    for (auto command = commands.begin(); command != commands.end(); ++command) {
        system(((std::string)*command).c_str());
    }
}