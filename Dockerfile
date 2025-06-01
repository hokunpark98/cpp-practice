FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    g++ \
    make \
    cmake \
    gdb \
    valgrind \
    vim

WORKDIR /app
CMD ["bash"]