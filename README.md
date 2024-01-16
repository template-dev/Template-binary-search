# Template-binary-search

This C++ project provides a template binary search algorithm that can be used with any sorted sequential container. The binary search efficiently searches for a specific value in a sorted collection.

## Prerequisites

- CMake (minimum version 3.12)
- C++ Compiler that supports C++11 standard

## Building the Project

To build the project, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/Template-binary-search.git
    cd Template-binary-search
    ```

2. Create a build directory:

    ```bash
    mkdir build
    cd build
    ```

3. Generate the build files with CMake:

    ```bash
    cmake ..
    ```

4. Build the executable:

    ```bash
    cmake --build .
    ```

## Running the Project

After building the project, you can run the executable:

```bash
./Template-binary-search
```

This will execute the binary search algorithm on a static array and a vector, printing whether the specified values are found or not.

## Project Structure

* `binary.cpp`: Contains the implementation of the binary search algorithm.
* `CMakeLists.txt`: CMake configuration file for building the project.
* `README.md`: Project documentation.

## Usage

Feel free to adapt and extend the binary search algorithm for your specific use cases. The provided algorithm works with any sorted sequential container, such as arrays, vectors. Modify the main function in binary.cpp or add new source files as needed.

## License

This project is licensed under the MIT License