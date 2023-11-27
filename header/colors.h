#pragma once

#ifndef COLORS_H_
#define COLORS_H_

#include <string>

#define g(x) color::fg(x, color::fgCodes::GREEN, false)
#define gr(x) color::fg(x, color::fgCodes::GREEN, true)

#define w(x) color::fg(x, color::fgCodes::WHITE, false)
#define wr(x) color::fg(x, color::fgCodes::WHITE, true)

namespace color {
    enum fgCodes {
        RESET,
        WHITE,
        GREEN
    };

    std::string convert_fg_codes(fgCodes cds);
    std::string fg(std::string content, fgCodes cds, bool reset);

}

#endif // COLORS_H_