# arrays (elem elem elem)
# si no pegas el = te tira syntax error
mi_arr=(1 2 "tres" "cuatro" 5) # instancio array
declare -a array_vacio # declaro array vacio

mi_arr+=("six") # agrego elemento
echo ${mi_array[0]} # imprimo el primer elemento
echo ${mi_array[@]} # imprimo todos los elementos


# recorro en loop

# obtengo el elemento
for item in ${mi_array[@]}; do 
    echo $item
done

# uso el indice
for i in ${!mi_array[@]}; do
    echo ${mi_arrary[$i]}
done

N=6

for((i=0; i<=$N; i++));do
    echo $if
done

# ej 9 c 
# yo en home no tengo nada, no se de que archivo tabla.csv se refieren
# no es lo que pedian pero ñe
while IFS="," read -r org type location name division source
do
    echo "El nombres de la organizacion es $name y queda en $location " >> parseo.txt
done < Organization_v3.csv

# > sobreescribe, >> appendea a lo que ya existe