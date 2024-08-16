# arrays (elem elem elem)

mi_arr = (1 2 "tres" "cuatro" 5) # instancio array
declare -a array_vacio # declaro array vacio

mi_arr += ("six") # agrego elemento
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
