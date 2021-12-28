#-----------------------------------------------------------
cmake_minimum_required(VERSION 3.8)
project(graph_builder
        VERSION 0.1.2.1)


#-----------------------------------------------------------
# cmake variables
#-----------------------------------------------------------	
set(CMAKE_CXX_FLAGS 
	"-Wfatal-errors")
set(CMAKE_EXE_LINKER_FLAGS 
	"-static-libgcc -static-libstdc++")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY 
	"${PROJECT_SOURCE_DIR}/bin") 


#-----------------------------------------------------------
# project variables 
#-----------------------------------------------------------
set(SOURCE_DIR 
	"${PROJECT_SOURCE_DIR}/src/")
file(GLOB_RECURSE SOURCES
	"${SOURCE_DIR}/*.cpp")
set(LIBS
	"${PROJECT_SOURCE_DIR}/lib")
set(SFML_DIR 
	"${LIBS}/SFML")
set(SFML_INCLUDE_DIR 
	"${SFML_DIR}/include")
set(SFML_LIBRARIES 
	"${SFML_DIR}/lib/libsfml-system.so"
	"${SFML_DIR}/lib/libsfml-graphics.so"
	"${SFML_DIR}/lib/libsfml-window.so")
set(gb_objects
	"${SOURCE_DIR}/objects/")

#-----------------------------------------------------------
# main
#-----------------------------------------------------------
find_package(SFML REQUIRED system window graphics)

add_executable(${PROJECT_NAME} 
			   ${SOURCES})
add_subdirectory(${gb_objects})

include_directories(${SOURCE_DIR}									
					${SFML_INCLUDE_DIR}
					${gb_objects})
target_link_libraries(${PROJECT_NAME}
					  ${SFML_LIBRARIES}
					  gb_objects)
#-----------------------------------------------------------

