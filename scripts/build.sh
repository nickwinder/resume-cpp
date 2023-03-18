#!/bin/bash

set -eo pipefail

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
REPO_ROOT="$SCRIPT_DIR/.."
BUILD_DIR="$REPO_ROOT/build"

cmake -GNinja -S "$REPO_ROOT" -B "$BUILD_DIR"
cmake --build "$BUILD_DIR" --target "resume"
