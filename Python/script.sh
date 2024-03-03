#!/bin/bash

# Directory containing the Python files
dir="."

# Loop over all Python files in the directory and its subdirectories
find "$dir" -name "*.py" | while read file; do
  # Remove all blank lines
  sed -i '/^$/d' "$file"

  # Format with autopep8
  autopep8 --in-place --aggressive --aggressive "$file"
done