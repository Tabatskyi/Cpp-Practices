add_library(fibonacci_lib STATIC)

target_sources(fibonacci_lib PRIVATE src/fibonacci.cpp)
target_include_directories(fibonacci_lib PRIVATE include)

target_compile_features(fibonacci_lib PUBLIC cxx_std_23)
