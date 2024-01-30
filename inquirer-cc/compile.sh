#!/bin/bash
directory=inquirer-cc/src
cpp_files=$(find "$directory" -type f -name "*.cpp")
g++ -o inquirer-cc/bin/main $cpp_files
