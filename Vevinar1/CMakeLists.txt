# CMakeList.txt: проект CMake для Vevinar1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Vevinar1 "main.cpp" "inout.h" "read.cpp" "print.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Vevinar1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
