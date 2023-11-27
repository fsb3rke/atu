#include "../header/shw.h"

void Shw::sendMessages() {
    for (size_t i = 0; i < this->logs.size(); ++i) {
        std::cout << logs.at(i) << std::endl;
        Sleep(this->log_durations.at(i));
    }
}

std::string Text(std::string x) {
    return w("[  ") + g("OK") + w("  ]") + " " + wr(x);
}