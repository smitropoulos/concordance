# Concordance of English Text

This is a coding exercise. Given an arbitrary piece of text in English, the program will create an alphabetical list
of each of the words in the text, along with their frequency and sentence position.

## Building

In order to build the program, please use CMake. No additional libraries are used except google-test which is
handled automatically in CMake.

```shell
$ mkdir build && cd build
$ cmake ..
$ cmake --build .
```

## Running

The program requires an argument with the text file which will be read.

```shell
$ conc <text_file>
```

### Tests

To run the tests, use ctest inside the build directory.

```shell
$ ctest
```


