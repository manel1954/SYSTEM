                
#!/bin/bash  
                        #Colores
ROJO="\033[1;31m"
VERDE="\033[1;32m"
BLANCO="\033[1;37m"
AMARILLO="\033[1;33m"
CIAN="\033[1;36m"
GRIS="\033[0m"
MARRON="\33[38;5;138m"
                        clear
                        echo "${GRIS}"
                        cd /home/pi/SYSTEM   
                        git pull  
                        /home/pi/SYSTEM/qt/ ./qt_actualizando_imagen                                    
                        #sh /home/pi/SYSTEM/ejecutar_ImagenActualizada.sh &
                        mv qt_* /home/pi/SYSTEM/qt
                        chmod 777 -R /home/pi/SYSTEM/qt






