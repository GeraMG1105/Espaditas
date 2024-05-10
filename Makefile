# Define variables
output = bin
source = src
include_dirs = -Iinclude
dependencies = -lftxui-screen -lftxui-dom -lftxui-component
flags = -std=c++2a $(dependencies) $(include_dirs)

# Default target
all: espaditas pantalla

# Rule to compile and run 'espaditas'
espaditas: $(output)/espaditas
	./$<

$(output)/espaditas: $(source)/main.cpp
	g++ -o $@ $< $(flags)

# Rule to compile and run 'pantalla'
pantalla: $(output)/pantalla
	./$<

$(output)/pantalla: $(source)/pantalla.cpp
	g++ -o $@ $< $(flags)

# Clean up compiled files


# Phony targets
.PHONY: all espaditas pantalla clean
