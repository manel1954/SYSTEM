'''
THIS EXAMPLE WILL NOT WORK AS IT IS - YOU MUST SPECIFY YOUR OWN VALUES!!!

This file is organized around the "Conference Bridges" that you wish to use. If you're a c-Bridge
person, think of these as "bridge groups". You might also liken them to a "reflector". If a particular
system is "ACTIVE" on a particular conference bridge, any traffid from that system will be sent
to any other system that is active on the bridge as well. This is not an "end to end" method, because
each system must independently be activated on the bridge.

The first level (e.g. "WORLDWIDE" or "STATEWIDE" in the examples) is the name of the conference
bridge. This is any arbitrary ASCII text string you want to use. Under each conference bridge
definition are the following items -- one line for each HBSystem as defined in the main HBlink
configuration file.

    * SYSTEM - The name of the sytem as listed in the main hblink configuration file (e.g. hblink.cfg)
        This MUST be the exact same name as in the main config file!!!
    * TS - Timeslot used for matching traffic to this confernce bridge
    * TGID - Talkgroup ID used for matching traffic to this conference bridge
    * ON and OFF are LISTS of Talkgroup IDs used to trigger this system off and on. Even if you
        only want one (as shown in the ON example), it has to be in list format. None can be
        handled with an empty list, such as " 'ON': [] ".
    * TO_TYPE is timeout type. If you want to use timers, ON means when it's turned on, it will
        turn off afer the timout period and OFF means it will turn back on after the timout
        period. If you don't want to use timers, set it to anything else, but 'NONE' might be
        a good value for documentation!
    * TIMOUT is a value in minutes for the timout timer. No, I won't make it 'seconds', so don't
        ask. Timers are performance "expense".
    * RESET is a list of Talkgroup IDs that, in addition to the ON and OFF lists will cause a running
        timer to be reset. This is useful   if you are using different TGIDs for voice traffic than
        triggering. If you are not, there is NO NEED to use this feature.
'''

BRIDGES = {
        'PARROT': [
            {'SYSTEM': 'MASTER', 'TS': 2, 'TGID': 9990, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE', 'ON': [], 'OFF': [],'RESET': []},
            {'SYSTEM': 'PARROT', 'TS': 2, 'TGID': 9990, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE', 'ON': [], 'OFF': [],'RESET': []},
        
        
        #regla 2
        #],    
        #'DMR+4370': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4371, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4370], 'OFF': [84370], 'RESET': []},
            #{'SYSTEM': 'DMR+4370', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 3
        #],    
        #'DMR+4371': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4371, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4371], 'OFF': [84371], 'RESET': []},
            #{'SYSTEM': 'DMR+4371', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 4
        #], 
        #'DMR+4374': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4374, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4374], 'OFF': [84374], 'RESET': []},
            #{'SYSTEM': 'DMR+4374', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 5
        #],  
        #'DMR+21465': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 21465, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [21465], 'OFF': [821465], 'RESET': []},
            #{'SYSTEM': 'DMR+21465', 'TS': 2, 'TGID': 21465, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 6
        #],
            #'DMR+4376': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4376, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4376], 'OFF': [84376], 'RESET': []},
            #{'SYSTEM': 'DMR+4376', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 7
        #],
            #'DMR+4377': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4377, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4377], 'OFF': [84377], 'RESET': []},
            #{'SYSTEM': 'DMR+4377', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 8
        #],
            #'DMR+4378': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4378, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4378], 'OFF': [84378], 'RESET': []},
            #{'SYSTEM': 'DMR+4378', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        
        
        
        
        
        #regla 9
        #],
            #'DMR+4379': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4379, 'ACTIVE': False, 'TIMEOUT': 10, 'TO_TYPE': 'ON',  'ON': [4379], 'OFF': [84379], 'RESET': []},
            #{'SYSTEM': 'DMR+4379', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 2, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
    




        #regla 10
        #],
        #'XLX266-Z': [
            #{'SYSTEM': 'EAXXXX', 'TS': 2, 'TGID': 4026, 'ACTIVE': True, 'TIMEOUT': 10, 'TO_TYPE': 'NONE',  'ON': [4026], 'OFF': [84026], 'RESET': []},
            #{'SYSTEM': 'XLX266-Z', 'TS': 2, 'TGID': 4026, 'ACTIVE': True, 'TIMEOUT': 10, 'TO_TYPE': 'NONE',  'ON': [4026], 'OFF': [], 'RESET': []},
            #{'SYSTEM': 'XLX266-Z', 'TS': 2, 'TGID': 9, 'ACTIVE': True, 'TIMEOUT': 10, 'TO_TYPE': 'NONE',  'ON': [], 'OFF': [], 'RESET': []},
        ]
  
}

if __name__ == '__main__':
    from pprint import pprint
    pprint(BRIDGES)
