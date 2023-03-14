cmake_minimum_required (VERSION 3.8)
project ("CIS22A-Midterm")

set(CMAKE_CXX_STANDARD 17)

set(src_dir src)

file(GLOB src_files "${src_dir}/*.cpp")
file(GLOB include_files "${src_dir}/*.hpp")

add_executable(Application
	${src_files}
	${include_files}
)

target_include_directories(Application PRIVATE "${src_dir}/")
