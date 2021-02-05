# LED loop on Arduino

<p align="center"><img src="https://github.com/4lch3my/LED_loop/blob/main/Scematics/final.gif"/></p> //replace with actual video


Difficulty: 2/10

## What you need

- 1x Arduino Uno
- 1x Breadboard
- 8x 5mm LED (any colour)
- 8x Wires (to connect Arduino with Board)
- 10x Jumper wire (for Board connections)
- 8x 220 Ohm resistor

## Getting Started

#### Polarity
First we need to determine what side of our LED is what polarity. As we are using single coloured LED's this should be simple. Usually the longer strand on the LED is the positive (+) and the shorter one is negative (-) side. If they are the same lenght, refer to manual or sellers website. I got my LED's from https://ebay.to/3cLeoJs if you want to follow along exactly.

#### Breadboard setup
Now that we know this, we need to setup our breadboard with all the components before connecting it to the Arduino. I have included a handy image and schematic on how everything needs to be setup on the board. (Coloured wires DO NOT represent the polarity of the wires.)

<p align="center"><img src="https://github.com/4lch3my/LED_loop/blob/main/Scematics/LED_loop_cables_only.png"/></p>

After connecting all the wires, you should end up with something like this:

<p align="center"><img src="https://github.com/4lch3my/LED_loop/blob/main/Scematics/LED_loop_breadboard_cables_only.jpg"/></p>

#### Connecting to Arduino

After the main board is setup, we can start working on connecting it to the Arduino. <br>
I have added a coloure coded image below, so you can easily attach all cables as needed

<p align="center"><img src="https://github.com/4lch3my/LED_loop/blob/main/Scematics/LED_loop_with_board.png"/></p>

After connecting you should have something like this

<p align="center"><img src="https://github.com/4lch3my/LED_loop/blob/main/Scematics/LED_loop_breadboard.jpg"/></p>

!!Make sure you are 100% sure about this, as if you connect it the incorrect way, it will fry and destroy your LED's!!



#### Installing/Running the software
Now that the hardware part is out of the way, we can finally test the LED's.  Download the "8_LED_TEST.ino" file from the REPO above and load it on to your Arduino. If all goes well the LED's will run in a loop without stopping and lighting up one-by-one.


#### Ending words
Congratulations! You should have a working 8 LED loop on your Arduino now. Did you get stuck? Do you have any questions? Have an issue or an idea? Please let me know by messaging me so we can have a chat about it. 


## Author

This project was made by 4lch3my on 2021.02.05. and can be viewed on http://4lch3my.net/ *some link will go here as soon as the forum is up*
