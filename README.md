# RTSeries

A C++17 ray tracer project — optimized for macOS (Apple Silicon) using CMake — based on [Peter Shirley’s *Ray Tracing in One Weekend* series](https://raytracing.github.io/).

---

## Build

This project requires **C++17 or newer** (tested with AppleClang on macOS)

```bash
mkdir build
cd build
cmake ..
make
```

## Run

```bash
./RTSeries > image.ppm
```

## Credits 

This project is inspired by and follows the structure of Peter Shirley’s Ray Tracing in One Weekend book series.
All implementation details and optimizations (C++17, Apple Silicon, and CMake integration) are my own.
- Official books: https://raytracing.github.io/
- Official reference code: https://github.com/RayTracing/raytracing.github.io

## License

Peter Shirley’s Ray Tracing in One Weekend books and reference code are released under the CC0 license, placing them in the public domain.
This repository is intended for educational purposes only. 