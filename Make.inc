# -*- mode: makefile-gmake -*-
ifneq ($(OS),Windows_NT)
  OS = $(shell uname)
endif

CSTD = -std=gnu99
CFLAGS = -Wall -O3

ifeq ($(OS), Linux)
SHLIB_EXT = so
fPIC = -fPIC
endif

ifeq ($(OS), FreeBSD)
SHLIB_EXT = so
fPIC = -fPIC
endif

ifeq ($(OS), OpenBSD)
SHLIB_EXT = so
fPIC = -fPIC
endif

ifeq ($(OS), SunOS)
SHLIB_EXT = so
fPIC = -fPIC
endif

ifeq ($(OS), Darwin)
SHLIB_EXT = dylib
fPIC = -fPIC
endif

ifeq ($(OS), Windows_NT)
SHLIB_EXT = dll
endif

