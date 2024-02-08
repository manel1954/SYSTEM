#!/bin/bash
                        cd /var/lib/mmdvm
                        #sudo rm DMRIds.dat
                        sudo curl --fail -o DMRIds.dat -s http://www.pistar.uk/downloads/DMRIds.dat
