#!/bin/bash
# Script de criação da estrutura dos codigos na maratona de programação 2017
# Autor: Wallace Brito
# Universidade Federal de Ouro Preto
# Data: 21/05/2017

mkdir prob
cd prob

cod="#include<bits/stdc++.h>\nusing namespace std;\n\nint main(){\n\n\n return 0;\n}"
dic=(A B C D E F G H I J K L M N O)

for s in ${dic[@]}; do
    mkdir $s
    cd $s
    mkdir "in"
    mkdir "out"
    touch "in/1.in" "in/2.in" "in/3.in"
    touch "$s.cpp"
    echo -e $cod > "$s.cpp"
    cd ..
done
