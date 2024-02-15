# For standard users
gcc -o ./bin/boxyx86 ./src/*.c

# For ARM users
arm-linux-gnueabi-gcc -o ./bin/boxyarm ./src/*.c

# For ARM64 users
aarch64-linux-gnu-gcc -o ./bin/boxyarm64 ./src/*.c