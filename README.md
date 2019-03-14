# musical-stairs

## Setting up raspberry-pi
1. Download the os for [raspberry-pi](https://www.raspberrypi.org/downloads/raspbian/)
2. Pi can be used in two ways: by connecting to an hdmi monitor / connecting to pc using ethernet and launching a remote desktop.
3. For users connecting to pc using ethernet make sure to download Raspbian Stretch with desktop and recommended software.
![raspbian os](https://raw.githubusercontent.com/ajayragh97/musical-stairs/master/images/Raspbian.PNG)
4. Install [balena etcher](https://www.balena.io/etcher/) in your pc.
5. Use an sd card having atleast 8GB capacity for flashing the os.Make the sd card bootable by flashing os image using balena etcher.
6. After making the sd card bootable open the sd card and create a blank file named ssh without any file extension.This can be made either by: creating a blank text file ->naming it as ssh -> clearing the (.txt) file extension. or by using command prompt type the command:  *echo>E:\ssh*   (E is the directory name for my sd card,you can replace it with your sd-card directory).
7. Adding this file enables the pi to enable ssh capability at bootup.
8. Now to setup windows first connect pc to wifi then follow below steps:

   *start->settings->Network and security->change adapter options->right click wifi and open properties->click sharing tab->tick on allow sharing and select ethernet from the drop down list->ok*
9. Now add sd-card into pi and power it up. wait for 2-5 mins for the pie to install the os,then connect it to pc via ethernet cable. 
10. Now you need 2 new softwares: [puTTY](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html) & [Xming](https://sourceforge.net/projects/xming/).
11. After installing putty and xming open xming,now xming will start to run in background.
12. Setting up puTTY:
       1. open command prompt & type *ipconfig /all* from this find the ip address of your pi.
       2. Now open puTTY: type in ip address of pi->select ssh from the list from the side and click on x11 forwarding and enable it->click open
       ![putty1](https://raw.githubusercontent.com/ajayragh97/musical-stairs/master/images/putty1.jpg)
       ![putty2](https://raw.githubusercontent.com/ajayragh97/musical-stairs/master/images/putty2.jpg)
       3. Now the ssh login prompt will come use the default username(*pi*) and password(*raspberry*) to login.
       4. After login type in command *startlxde*.


13. After opening raspberry pi connect the arduino to pi and copy the repository into pi and then run the piano_pi.py file using python2.7. 