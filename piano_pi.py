import pygame

import serial
import time

onpi = True

numpins = 2

if onpi:
    ser = serial.Serial('/dev/tty/ACM0', 9600)                  #/dev/tty/ACM0 is port to which arduino is connected

pygame.mixer.pre_init(channels=8, buffer=1024)
pygame.mixer.init()


def piano(line):
    pl_piano = pygame.mixer.Sound("notes/" + line + ".wav")       
    print ("notes/"+str(line)+".wav")
    pl_piano.play()
prev=""
while True:
    line = ""
    if onpi:
            line = ser.readline()
    else :
            line= raw_input()
    for i in range(0 ,len(line)):
        if line!= "" and line!=prev:
            piano(line[i])
            prev=line
            
