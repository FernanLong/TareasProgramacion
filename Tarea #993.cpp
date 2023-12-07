#include <bits/stdc++.h>
using namespace std;
int numeroRandom(int max){
    
    // Crear un generador de números aleatorios
    random_device rd;
    mt19937 gen(rd());
    
    // Definir el rango del número aleatorio 
    uniform_int_distribution<int> distribucion(0, max);

    // Generar un número aleatorio distribucion(gen);
    
    return distribucion(gen);
}

int ataque(int fuerza){
    
    return numeroRandom(fuerza);
    
}

int curacion(int vida){
    
    return vida+10;
    
}

int main() {
    
    //Definición de variables  
    int respuesta, fuerza, vida,fuerzaEnemigo, vidaEnemigo, random, damage,turno, contador, cura;
    
    // Se definen los nombres de los enemigos
    string tipoEnemigos[4]={"Barbaro","Mago","Elfo","Orco"};
    // Variable para reiniciar el juego
    bool finJuego=false;
    
    // ciclo para jugar las veces hasta que el usuario desee
   while (!finJuego){
       
    // Variable para reiniciar el juego de nuevo por si alcaso
    bool finJuego=false;
    /* Stats del jugador
    maximo daño posible del jugador*/
    fuerza=15;
    // Vida del jugador
    vida=100;
       
    // Mensaje bienvenida
       cout<<"Bienvenido(a) a peleitas locas a partir de ahora deberás introducir el valores de las opciones que se muestran para continuar\nPresiona '1' para continuar"<<endl;
       
       cin>>respuesta;
       
       if(respuesta!=1){
           
           finJuego=true;
           
       }/*fin de la bienvenida*/ else{
           
            // generamos el valor random para definir enemigo 
            random= numeroRandom(3);
        
            // cout << "Número aleatorio: " << random << endl;
        
            
            // Se establece la vida y la cantidad de daño maximo que puede dar cada enemigo  
            
            switch (random){
                
                case 0: 
                    
                    vidaEnemigo=100;
                    fuerzaEnemigo=12;
        
                break;
                
                case 1:
                
                    vidaEnemigo=100;
                    fuerzaEnemigo=10;
                
                break;
                
                case 2:
                
                    vidaEnemigo=90;
                    fuerzaEnemigo=15;
                
                break;
                
                case 3:
                
                    vidaEnemigo=120;
                    fuerzaEnemigo=8;
                
                break;
                
            } //Fin del switch
            
            // Se muestran las Estadisticas del enemigo para saber contra quien se enfrenta
            cout<<"Tus estadisticas: \nVida: "<<vida<<" \nDaño: 0-"<<fuerza<<endl<<"\nTu enemigo es un "<<tipoEnemigos[random]<<" sus estadisticas son: \n Vida: "<<vidaEnemigo<<"\n Daño: 0-"<<fuerzaEnemigo<<endl;
            
            cout<<"¿Deseas atacar primero? \n1)Si 2)No"<<endl;
            
            cin>>respuesta;
            
            // en caso de que el jugador ataque primero
            if(respuesta==1){
                
                damage=ataque(fuerza);
                
                vidaEnemigo=vidaEnemigo - damage;
                
                cout<<"Tu ataque tuvo un efecto de "<< damage<<" de daño"<< "\nLa vida actual del enemigo es de "<<vidaEnemigo;
                
                damage=ataque(fuerzaEnemigo);
                
                vida=vida - damage;
                
                cout<<"\nEl ataque enemigo tuvo un efecto de "<< damage<<" tu vida actual es de "<<vida<<endl;
                
            
            }/*En caso que el jugador decida jugar el 2do turno*/else{
                
                damage=ataque(fuerzaEnemigo);
                
                vida=vida - damage;
                
                cout<<"\nEl ataque enemigo tuvo un efecto de "<< damage<<" tu vida actual es de "<<vida<<endl;
                
                damage=ataque(fuerza);
                
                vidaEnemigo=vidaEnemigo - damage;
                
                cout<<"Tu ataque tuvo un efecto de "<< damage<<" de daño"<< "\nLa vida actual del enemigo es de "<<vidaEnemigo;
                
            }
            
            contador=0;
            
            // bucle hasta que uno muera
            while(contador==0){
                
                if(vida>0){
                    
                    if(vidaEnemigo>0){  
                        
                        cout<<"\n¿Cuál será tu siguiente movimiento?"<<endl<<"1)Atacar 2)Curar\n";
                
                        cin>>respuesta;
                
                        if(respuesta==1){
                            
                            // es el turno del jugador
                            
                            damage=ataque(fuerza);
                            
                            vidaEnemigo=vidaEnemigo-damage;
                        
                            cout<<"\nTu ataque tuvo un efecto de "<< damage<<" de daño"<< "\nLa vida actual del enemigo es de "<<vidaEnemigo<<endl;
                            
                            if(vidaEnemigo>=0){
                                    
                                // es el turno del enemigo
                                
                                damage=ataque(fuerzaEnemigo);
                            
                                vida=vida - damage;
                            
                                cout<<"\nEl ataque enemigo tuvo un efecto de "<< damage<<" de daño \ntu vida actual es de "<<vida<<endl;
                                    
                            }else{
                                
                                contador=1;
                                
                            }
                            
                            }else{
                                
                                if(vida>100){
                                    
                                    vida=100;
                                    
                                    cout<<"\nEstas al maximo de vida, no puedes curarte solo puedes atacar\n";
                            
                                }else{
                                    
                                    if(vida>=100){
                                    cout<<"\nEstas al maximo de vida, no puedes curarte solo puedes atacar\n";
                                    
                                    damage=ataque(fuerza);
                                    
                                    vidaEnemigo=vidaEnemigo-damage;
                                    
                                    cout<<"\nTu ataque tuvo un efecto de "<< damage<<" de daño"<< "\nLa vida actual del enemigo es de "<<vidaEnemigo<<endl;
                                    
                                    turno=1;
                                    
                                    }else{
                                        
                                        vida=vida+10;
                                        
                                        cout<<"Te has curado tu vida actual es de:"<<vida<<endl;
                                        
                                        damage=ataque(fuerzaEnemigo);
                                    
                                        vida=vida - damage;
                                    
                                        cout<<"\nEl ataque enemigo tuvo un efecto de "<< damage<<" tu vida actual es de "<<vida<<endl;
                                            
                                    }
                                    
                                }
                                
                            }
                            
                        }else{
                            
                            contador=1;
                            
                        }
                        
                }else{
                    
                    contador=1;
                    
                }
                
                
            }
            if(vida<=0){
                cout<<"\nHas perdido :(\n";
            }else{
                cout<<"\nHas ganado :)\n";
            }
            
            // Se solicita un valor para saber si reiniciar el ciclo o terminar con el mismo
            cout<<"\n¿Desea jugar de nuevo? \n1)Si 2)No \n";
            
            cin>>respuesta;
            
            if (respuesta!=1){
                finJuego=true;
            }
            
        }
            
            
        }
           
    return 0;
    }
       
    
