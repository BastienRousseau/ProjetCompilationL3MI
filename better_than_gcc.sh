#!/bin/bash

output="_3.c"

print_line()
{
    cpt=1
    num=$1
    realnum=$((num-1))
    
    while read line
    do
	if [ $cpt == $realnum ]
	then
	    echo -e "$line "
	fi
	cpt=$((cpt+1))
    done < $2
}
	

test_compilation()
{
    file=$1
    if [ -f "./Tests/$file" ]
    then
	echo ---------- $file ----------
	echo
	touch compil_log
	name=${file%%.*}
	name_output="./outputs/$name$output"
	(./sources/frontend/structfe.out < ./Tests/$file) > $name_output 2>compil_log
	compil="$?"	
	if [ $compil == 0 ]
	then
	    echo $file: Compilation OK
	    touch test_log
	    touch backend_log
	    (./sources/backend/structbe.out < $name_output) >backend_log 2>test_log
	    parse="$?"
	    if [ $parse == 0 ]
	    then
		echo $name_output: Accepted
	    else
		echo $name_output: Refused
		cat test_log
		print_line $parse $name_output
	    fi
	    rm backend_log
	    rm test_log
	else
	    if [ $compil == 1 ]
	    then
		echo $file: Erreur de syntaxe a la compilation
	    else
		if [ $compil == 2 ]
		then
		    echo $file: Erreur semantique a la compilation
	        else
		    echo $file: Autre erreur a la compilation
		fi
	    fi
	fi
	cat compil_log
	rm compil_log
    fi
    echo
}


if [ $# == 0 ]
then
    list_file=`ls ./Tests`
else
    list_file=$@
fi

rm ./outputs/*

for f in $list_file
do
    test_compilation $f
done
