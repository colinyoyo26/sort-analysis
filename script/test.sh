#!/bin/bash
try() {

  arg="$1"

  ./insertion $arg >> out1.txt
  ./qsort $arg >> out2.txt
}

try 64 
try 128
try 256
try 512
try 1024
try 2048
try 4096
try 9182
try 18364 