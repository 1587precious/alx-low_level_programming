#!/bin/bash

# Function to multiply two numbers
multiply() {
    echo "$1 * $2" | bc
}

# Main function
main() {
    # Check the number of arguments
    if [ "$#" -ne 2 ]; then
        echo "Error"
        exit 98
    fi
    
    # Check if arguments are composed of digits
    if ! [[ $1 =~ ^[0-9]+$ ]] || ! [[ $2 =~ ^[0-9]+$ ]]; then
        echo "Error"
        exit 98
    fi
    
    # Perform multiplication
    result=$(multiply "$1" "$2")
    
    # Print the result
    echo "$result"
}

# Call the main function with arguments passed to the script
main "$@"

