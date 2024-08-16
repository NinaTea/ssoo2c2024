
# Notas
# ; separador de comandos
# * comodin para nombre de archivos
# ? comodin para 1 caracter en nombre de archivos

# esto lo hace ejecutable 
#! /usr/bin/bash

echo -n "Trabajas? si o no "
read rta

if [ $rta == 'si' ] 
then 
    echo -n "Biyuya"
else
    echo -n "No hay biyuya"
fi

echo -e "\n"

echo -n "Ahora vas a sumar "
echo -n "Dame un entero "
read x
echo -n "Dame otro entero "
read y
echo -e "La suma es: $(($x+$y)) \n"
echo -e "El producto es: $(($x*$y))\n"
