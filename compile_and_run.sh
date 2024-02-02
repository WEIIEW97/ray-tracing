cd build
if test -e "result.ppm"; then
    rm result.ppm
fi
cmake .. -GNinja
ninja
./ray-tracing >>result.ppm
