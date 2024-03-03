#!/bin/bash

# Directory containing the Python files
dir="./Python"

# Loop over all Python files in the directory and its subdirectories
find "$dir" -name "*.py" | while read file; do
    # Get the base name of the file
    base=$(basename "$file")

    # Transform the base name to follow the conventions:
    # - convert to lowercase
    # - replace spaces with underscores
    # - replace dashes with underscores
    newbase=$(echo "$base" | tr '[:upper:]' '[:lower:]' | tr ' ' '_' | tr '-' '_')

    # Get the directory name of the file
    dir=$(dirname "$file")

    # Construct the new file path
    newfile="$dir/$newbase"

    # Rename the file
    mv -- "$file" "$newfile"
done