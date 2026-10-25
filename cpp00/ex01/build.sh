#!/usr/bin/env sh

set -eu

SCRIPT_DIR="$(cd "$(dirname"$0")" && pwd)"

cmake -S "$SCRIPT_DIR" -B "$SCRIPT_DIR/build" -DCMAKE_BUILD_TYPE=Debug

cmake --build "$SCRIPT_DIR/build"
