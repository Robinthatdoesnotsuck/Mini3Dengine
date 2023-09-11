cmake_minimum_required(VERSION 3.26)
project(ActorComponentModel)

set(CMAKE_CXX_STANDARD 20)

add_executable(ActorComponentModel main.cpp Component/Component.cpp Component/Component.h Game/Game.cpp Game/Game.h Actor/Actor.cpp Actor/Actor.h)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})
target_link_libraries(ActorComponentModel ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})
