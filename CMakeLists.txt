cmake_minimum_required(VERSION 3.16)
project(project_easy_gsl)

include(FetchContent)

SET(FETCHCONTENT_QUIET FALSE)

#


 
message(STATUS "GSL não encontrado: Baixando GSL do repositório")

# Definindo algumas variáveis para desabilitar testes e documentação
# Isso é específico para o GSL e pode variar de acordo com a biblioteca
set(GSL_DISABLE_TESTS 1)
set(DOCUMENTATION OFF)

FetchContent_Declare(
    gsl
    GIT_REPOSITORY https://github.com/ampl/gsl
    GIT_TAG        master
    SOURCE_DIR     "${CMAKE_CURRENT_SOURCE_DIR}/src/vendor/gsl"
)

FetchContent_GetProperties(gsl)
if(NOT gsl_POPULATED)
    FetchContent_Populate(gsl)
    # Dependendo da configuração CMake do GSL, pode ser necessário rodar seu CMakeLists.txt
    add_subdirectory(${gsl_SOURCE_DIR} ${gsl_BINARY_DIR})
endif()

list(APPEND easy_gsl_INCLUDES ${gsl_SOURCE_DIR}/include)
list(APPEND easy_gsl_LIBRARIES gsl gslcblas)

add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCE_DIR}/src/main.c
)

# Definindo o padrão C++
set_target_properties(${PROJECT_NAME} PROPERTIES
CXX_STANDARD 20
)

# Definindo o padrão C
set_target_properties(${PROJECT_NAME} PROPERTIES
C_STANDARD 23
)

target_include_directories(${PROJECT_NAME} PUBLIC ${easy_gsl_INCLUDES})
target_link_libraries(${PROJECT_NAME} PUBLIC ${easy_gsl_LIBRARIES})
