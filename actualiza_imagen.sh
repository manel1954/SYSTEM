                
#!/bin/bash  
                        #Colores
ROJO="\033[1;31m"
VERDE="\033[1;32m"
BLANCO="\033[1;37m"
AMARILLO="\033[1;33m"
CIAN="\033[1;36m"
GRIS="\033[0m"
MARRON="\33[38;5;138m"
NEGRO="\e[30m"
                        clear
                        echo -n "${NEGRO}"
                        
                        #cd /home/pi/SYSTEM   
                       # git pull --force                                                              
                        #mv qt_* /home/pi/SYSTEM/qt
                        #chmod 777 -R /home/pi/SYSTEM/                       
                       # cd /home/pi/SYSTEM/qt/
                       # ./qt_actualizando_imagen


                        #cd /home/pi/SYSTEM   
                       # git pull --force                                                              
                        #mv qt_* /home/pi/SYSTEM/qt
                        #chmod 777 -R /home/pi/SYSTEM/                       
                       # cd /home/pi/SYSTEM/qt/
                       # ./qt_actualizando_imagen
                        
                                        
                        cd /home/pi/SYSTEM
                        
                        git pull --force

                        

                        sudo rm -R /home/pi/ORANGEPI

                        mkdir /home/pi/ORANGEPI
                                                
                        cp -R /home/pi/SYSTEM/* /home/pi/ORANGEPI
                        cp -R /home/pi/ORANGEPI/* /home/pi/SYSTEM
                        cd /home/pi/SYSTEM
                        mv qt_* /home/pi/SYSTEM/qt
                        chmod 777 -R /home/pi/SYSTEM/                       
                        cd /home/pi/SYSTEM/qt/
                        ./qt_actualizando_imagen
                      
                        
                        #sudo rm -R /home/orangepi/qt
                        #echo






