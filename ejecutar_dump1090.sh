#!/bin/bash
sed -i "6c Exec=sh cerrar_dump1090.sh" /home/orangepi/Desktop/dump1090.desktop
sed -i "7c Icon=/home/orangepi/ORANGEPI/ICONO_AVION_ON.png" /home/orangepi/Desktop/dump1090.desktop
sed -i "10c Name[es_ES]=Cerrar Dump1090" /home/orangepi/Desktop/dump1090.desktop

stick=$(awk "NR==40" /home/orangepi/status.ini)
raw=$(awk "NR==42" /home/orangepi/status.ini)
ppm=$(awk "NR==44" /home/orangepi/status.ini)
http=$(awk "NR==46" /home/orangepi/status.ini)
gain=$(awk "NR==48" /home/orangepi/status.ini)
beast=$(awk "NR==50" /home/orangepi/status.ini)
index=$(awk "NR==52" /home/orangepi/status.ini)

if [ "$stick" = 'RSP1' ];then
xterm -geometry 69x29+22+48 -bg black -fg green -fa ‘verdana’ -fs 9x -T DUMP1090 -e sudo /home/orangepi/dump1090_sdrplay/dump1090 --net --interactive --gain $gain --dev-sdrplay

elif [ "$gain" = '-10' ];then
xterm -geometry 69x29+22+48 -bg black -fg green -fa ‘verdana’ -fs 9x -T DUMP1090 -e sudo /home/orangepi/dump1090/dump1090 --device $index --net --interactive --net-ro-port $raw --net-bo-port $beast --gain $gain --ppm $ppm --net-http-port $http
else
xterm -geometry 69x29+22+48 -bg black -fg green -fa ‘verdana’ -fs 9x -T DUMP1090 -e sudo /home/orangepi/dump1090/dump1090 --device $index --net --interactive --net-ro-port $raw --net-bo-port $beast --ppm $ppm --net-http-port $http
fi

sed -i "6c Exec=sh ejecutar_dump1090.sh" /home/orangepi/Desktop/dump1090.desktop
sed -i "7c Icon=/home/orangepi/ORANGEPI/ICONO_AVION_OFF.png" /home/orangepi/Desktop/dump1090.desktop
sed -i "10c Name[es_ES]=Abrir Dump1090" /home/orangepi/Desktop/dump1090.desktop
