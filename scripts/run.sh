#!/bin/bash
# Script para compilar e executar C++
# Autor: Notebook da PUC
# Modificado por Wallace Brito(UFOP)
# Data: 21/05/2017
# Exemplo: Para compilar o problema A e testar a instancia 2
#	   $ ./run.sh A 2
#
# Exemplo: Para compilar o problema B e testar a instancia 1
#	   $ ./run.sh B    ou   $ ./run.sh B 1

path="prob/$1"
paths="$path/$1"

INS=1
if [ $# -gt 1 ]; then
	INS=$2
fi
rm -f $1

OUT="$path/out/$INS.out"

if (g++ -o $1 $paths.cpp -Wall -pedantic -lm -g) then
	echo "### COMPILOU ###"
else
	exit
fi

if (! ./$1 < $path/in/$INS.in > $OUT) then
	echo "### RUNTIME ERROR ###" > $OUT
	exit
fi
less $OUT
