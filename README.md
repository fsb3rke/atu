# atu
    A simple plug&play app for smart boards

## Fixes Smart Board Problems
    The app can opens the all require programs on the board.

- On Screen Keyboard (``osk``)
- Standby Timeout (`0`)
- Monitor Timeout (`0`)

## Source Code Build
```bash
g++ -Wall -Werror -Wpedantic src/main.cpp src/handlerer.cpp src/colors.cpp src/shw.cpp -o atu.exe
```

## License
This software is released under the [MIT](https://github.com/fsb3rke/atu/blob/master/LICENSE) License.
