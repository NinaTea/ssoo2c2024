# script que pide un nombre y saluda
# Para que el script sea un archivo ejecutable y puedas usar su nombre como un comando de
# terminal, hay que añadir una línea que especifica el path al intérprete del script,

#! /usr/bin/bash
echo -n "Escribi tu nombre "
read nombre
echo "Hola $nombre "
echo -n "Felicidades por tu primer script"
echo -e "\n"
