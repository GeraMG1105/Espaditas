# VARIABLES
output = bin
source = src
include_dirs = -Iinclude
dependencies = -lftxui-screen -lftxui-dom -lftxui-component
flags = -std=c++2a $(dependencies) $(include_dirs)

# Target for compiling all
all: espaditas pantalla

# Target for running the espaditas executable
espaditas: $(output)/espaditas
	./$<

# Target for compiling the espaditas executable
$(output)/espaditas: $(source)/main.cpp
	g++ -o $@ $< $(flags)

# Target for compiling the pantalla executable
pantalla: $(output)/pantalla
	./$<

# Target for compiling the pantalla executable
$(output)/pantalla: $(source)/pantalla.cpp
	g++ -o $@ $< $(flags)

# Phony targets
.PHONY: all espaditas pantalla clean
