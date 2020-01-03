# sorting-algorithms

This project implements selection sort, insertion sort and bubble sort. 

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for testing purposes.

### Prerequisites

A working command line

### Installing and Running

Download the zip then link the files in the command line via the makefile and run the executable

Navigate to the correct directory and utilize the makefile

```console
foo@bar:~$ cd /path/to/directory/here
foo@bar:~$ make all
```

This will have created a few .o files and an executable. To run it, do as follows...

```console
foo@bar:~$ ./Main
```

Demo

```console
Selection sort by departure time:
Flight Number--Destination-Departure Time--Gate Number
HL875          Likely        05:33           T9
EA731          Popejoy       06:25           C6
LQ237          Caney         09:00           G3
WL004          Hesler        10:16           L7
JD033          Tacoma        15:31           A5
BZ911          Warrensburg   15:38           Z0
GY885          Wind Lake     16:54           T2
MT099          Michie        19:17           Q2
JF326          Batavia       19:53           W6
OY170          Upson         21:37           E2
_______________________________________
End of output

Insertion sort by departure time:
Flight Number--Destination-Departure Time--Gate Number
HL875          Likely        05:33           T9
EA731          Popejoy       06:25           C6
LQ237          Caney         09:00           G3
WL004          Hesler        10:16           L7
JD033          Tacoma        15:31           A5
BZ911          Warrensburg   15:38           Z0
GY885          Wind Lake     16:54           T2
MT099          Michie        19:17           Q2
JF326          Batavia       19:53           W6
OY170          Upson         21:37           E2
_______________________________________
End of output

Bubble sort by departure time:
Flight Number--Destination-Departure Time--Gate Number
HL875          Likely        05:33           T9
EA731          Popejoy       06:25           C6
LQ237          Caney         09:00           G3
WL004          Hesler        10:16           L7
JD033          Tacoma        15:31           A5
BZ911          Warrensburg   15:38           Z0
GY885          Wind Lake     16:54           T2
MT099          Michie        19:17           Q2
JF326          Batavia       19:53           W6
OY170          Upson         21:37           E2
_______________________________________
End of output

Selection sort by Destination:
Flight Number--Destination-Departure Time--Gate Number
JF326          Batavia       19:53           W6
LQ237          Caney         09:00           G3
WL004          Hesler        10:16           L7
HL875          Likely        05:33           T9
MT099          Michie        19:17           Q2
EA731          Popejoy       06:25           C6
JD033          Tacoma        15:31           A5
OY170          Upson         21:37           E2
BZ911          Warrensburg   15:38           Z0
GY885          Wind Lake     16:54           T2
_______________________________________
End of output

Insertion sort by Destination:
Flight Number--Destination-Departure Time--Gate Number
JF326          Batavia       19:53           W6
LQ237          Caney         09:00           G3
WL004          Hesler        10:16           L7
HL875          Likely        05:33           T9
MT099          Michie        19:17           Q2
EA731          Popejoy       06:25           C6
JD033          Tacoma        15:31           A5
OY170          Upson         21:37           E2
BZ911          Warrensburg   15:38           Z0
GY885          Wind Lake     16:54           T2
_______________________________________
End of output

Bubble sort by Destination:
Flight Number--Destination-Departure Time--Gate Number
JF326          Batavia       19:53           W6
LQ237          Caney         09:00           G3
WL004          Hesler        10:16           L7
HL875          Likely        05:33           T9
MT099          Michie        19:17           Q2
EA731          Popejoy       06:25           C6
JD033          Tacoma        15:31           A5
OY170          Upson         21:37           E2
BZ911          Warrensburg   15:38           Z0
GY885          Wind Lake     16:54           T2
_______________________________________
End of output


```

## Authors

* **Michael Roush** - *bubble sort/ selection sort*
* **Nicolas Harris** - *selection sort/ insertion sort*

## License

Copyright © 2017 Michael Roush. All rights reserved.

