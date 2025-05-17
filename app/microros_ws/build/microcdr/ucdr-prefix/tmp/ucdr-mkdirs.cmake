# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/miguel/microros_ws/src/eProsima/Micro-CDR"
  "/home/miguel/microros_ws/build/microcdr"
  "/home/miguel/microros_ws/build/microcdr/ucdr-prefix"
  "/home/miguel/microros_ws/build/microcdr/ucdr-prefix/tmp"
  "/home/miguel/microros_ws/build/microcdr/ucdr-prefix/src/ucdr-stamp"
  "/home/miguel/microros_ws/build/microcdr/ucdr-prefix/src"
  "/home/miguel/microros_ws/build/microcdr/ucdr-prefix/src/ucdr-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/microcdr/ucdr-prefix/src/ucdr-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/miguel/microros_ws/build/microcdr/ucdr-prefix/src/ucdr-stamp${cfgdir}") # cfgdir has leading slash
endif()
