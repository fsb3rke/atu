#pragma once

#ifndef HANDLERER_H_
#define HANDLERER_H_

#include <iostream>
#include <vector>

class CommandHandlerer {
public:
    void executeCommands(std::vector<std::string> commands);
};

#endif // HANDLERER_H_