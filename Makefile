#VARIABLES
output = bin
source = src
include_dirs = -Iinclude
dependencies = -lftxui-screen -lftxui-dom -lftxui-component
flags = -std=c++2a $(dependencies) $(include_dirs)


all: espaditas pantalla


espaditas: $(output)/espaditas
	./$<

$(output)/espaditas: $(source)/main.cpp
	g++ -o $@ $< $(flags)
# Phony targets
.PHONY: all espaditas pantalla clean
