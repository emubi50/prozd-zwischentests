#!/bin/bash

TARGET="$1"
cd "$TARGET" || { echo "Folder not found: $TARGET"; exit 1; }

gcc -std=c99 -Wall -Wextra -Werror -o main main.c

if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

for dir in Tests/*/; do
    if [ ! -f "${dir}test.label" ]; then
        echo "No label file found for test ${dir}"
        continue
    fi

    if [ ! -f "${dir}test.input" ]; then
        echo "No input file found for test ${dir}"
        continue
    fi

    if [ ! -f "${dir}test.expected" ]; then
        echo "No expected output file found for test ${dir}"
        continue
    fi

    ./main < "${dir}test.input" > "${dir}test.got"

    if diff -q "${dir}test.got" "${dir}test.expected" > /dev/null; then
        echo "PASS: test ${dir} ($(cat "${dir}test.label"))"
    else
        echo "FAIL: test ${dir} ($(cat "${dir}test.label"))"
        diff "${dir}test.got" "${dir}test.expected"
    fi
done