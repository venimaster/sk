cmake_minimum_required( VERSION 2.8 FATAL_ERROR )

project( sk )

include_directories( "${sk_SOURCE_DIR}/../include" )

set( PRV "${CMAKE_CURRENT_SOURCE_DIR}" )
set( PUB "${sk_SOURCE_DIR}/../include" )

set( PRV_INC
   )

set( PUB_INC "${PUB}/configuration.hpp"
             "${PUB}/control.hpp"
             "${PUB}/model.hpp"
             "${PUB}/state.hpp"
   )

set( SRC "${PRV}/configuration.cpp"
         "${PRV}/control.cpp"
         "${PRV}/model.cpp"
         "${PRV}/state.cpp"
   )

add_library( ${PROJECT_NAME}
             STATIC
             ${PRV_INC}
             ${PUB_INC}
             ${SRC}
           )

target_link_libraries( ${PROJECT_NAME}
                     )
