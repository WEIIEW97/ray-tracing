cd build
rm result.ppm
cmake .. -GNinja
ninja
./ray-tracing >> result.ppm