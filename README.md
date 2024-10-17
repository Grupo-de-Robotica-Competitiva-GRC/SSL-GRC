

SSL-EL Vision/Strategy
=======================
This project is about the system of vision and strategy that GRC will use for the SSL-EL competition . It is based upon grSIM simulator(https://github.com/MaracatronicsRobotics/grSim.git) that comes with clients sample projects.


__How to use__

Dê permissão de execução para o script 

```
$ chmod +x generate_proto_files.sh
```

Run qmake to generate the makefile:

```
$ qmake 
```
Then compile the program:

```
$ make
```

The executable will be located on the main directory.


```
./SSL-GRC
```

Changes in the graphic interface: you should only run the "make" command again.

You can also open the .pro in QT Creator and run with ctrl + r

System Requirements
-----------------------



Software Requirements
---------------------

```
sudo apt-get install libprotobuf-dev protobuf-compiler
```

```
sudo apt-get install libqt5serialport5
```


```
sudo apt-get install libqt5serialport5-dev
```


