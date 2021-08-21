# magic_lamp
ARDUINO: makes the 3 LEDs flash if you touch the capacitive sensor for more than 3 seconds

## Circuit diagram

! [diagram] (https://github.com/bugster86/lampada_magica/blob/main/lampada%20magica.png)

## Material list
! [diagram] (https://github.com/bugster86/lampada_magica/blob/main/lista%20materiali.png) 

## Links with arduino

- From the arduino GND pin connect a wire up to the first "-" column (less than the breadboard).
- From the first "-" (minus) column of the breadboard connect the second "-" (minus) column.
- From digital pin 10 of arduino connect a wire in position 10a
- From digital pin 11 of arduino connect a wire in position 6a
- from arduino digital pin 12 connect a wire in position 2a
- place the blue led in position 2g / 1g (anode in 2g)
- place the red led in position 6g / 5g (anode in 6g)
- place the green led in position 10g / 9g (anode in 9g)
- connect position 1j to GND
- connect position 5j to GND
- connect position 9j to GND
- connect a 220Ω resistor between positions 2b / 2f
- connect a 220Ω resistor between positions 6b / 6f
- connect a 220Ω resistor between positions 10b / 10f
- connect a 1MΩ resistor between positions 21b / 25b
- connect a wire from the arduino digital pin 2 to position 25c
- connect a wire from digital pin 4 arduino to position 21c
- connect a wire from position 25e and connect it to a piece of aluminum (the diagram shows an 8-pin connector but it is only to show the presence of the wire)