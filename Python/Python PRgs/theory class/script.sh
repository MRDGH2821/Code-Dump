#!/bin/bash

# Loop over all directories in the current directory
for olddir in */; do
    # Remove trailing slash
    olddir=${olddir%/}

    # Extract date and optional text
    if [[ $olddir =~ ([0-9]{1,2})-([0-9]{1,2})-([0-9]{2})(.*) ]]; then
        day=${BASH_REMATCH[1]}
        month=${BASH_REMATCH[2]}
        year=${BASH_REMATCH[3]}
        text=${BASH_REMATCH[4]}

        # Reformat date
        newdate=$(date -d "$month/$day/$year" +%Y-%m-%d)

        # Construct new directory name
        newdir="$newdate$text"

        # Rename directory
        mv -- "$olddir" "$newdir"
    fi
done