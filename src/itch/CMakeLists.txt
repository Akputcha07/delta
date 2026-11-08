add_library(delta_itch parser.cpp)
add_library(delta::itch ALIAS delta_itch)
target_include_directories(delta_itch PUBLIC include)
target_compile_features(delta_itch PUBLIC cxx_std_20)