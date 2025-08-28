# STM32G4RE NUCLEO Blink Example

### Software

[STM32CudeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)

### Build in console

For debug build:
```shell
cmake -DCMAKE_TOOLCHAIN_FILE=cubeide-gcc.cmake  -S ./ -B build -GNinja -DCMAKE_BUILD_TYPE=Debug
```

```shell
cmake --build build
```

For release build:
```shell
cmake -DCMAKE_TOOLCHAIN_FILE=cubeide-gcc.cmake  -S ./ -B build -GNinja -DCMAKE_BUILD_TYPE=Release
```

```shell
cmake --build build
```
