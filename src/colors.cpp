#include "../header/colors.h"

std::string color::convert_fg_codes(fgCodes cds) {
    switch (cds) {
        case color::fgCodes::RESET:
            return "\033[0m";
            break;
            
        case color::fgCodes::WHITE:
            return "\x1B[37m";
            break;
            
        case color::fgCodes::GREEN:
            return "\x1B[32m";
            break;

        default:
            return "";
            break;
    }
}

std::string color::fg(std::string content, fgCodes cds, bool reset) {
    return (
        color::convert_fg_codes(cds)
        + content
        + (
            reset
                ? color::convert_fg_codes(color::RESET)
                : ""
        )
    );
}