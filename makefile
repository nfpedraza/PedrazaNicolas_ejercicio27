Clase27.dat : Clase27.x
	./Clase27.x > Clase27.dat
    
areglo.dat : areglo.x
	./areglo.x 

Clase27.x : Clase27.cpp
	c++ Clase27.cpp -o Clase27.x
	
clean : 
	rm Clase27.x Clase27.dat 