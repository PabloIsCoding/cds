cmake_minimum_required(VERSION 3.0.0)

project(cds)

add_executable(
	${PROJECT_NAME}
	main.c
	linked_list.h
	linked_list.c
)

#target_link_libraries(${PROJECT_NAME} SDL2)