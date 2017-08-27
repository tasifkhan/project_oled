# project_oled
- Display driver for 8 by 8 OLED array. Common anode setup for 64 devices, controlled by Darlington arrays and Arduino Mega.
- Arduino code for displaying letters and numbers for the array, also a seven segment display. 

# notes
- 2017_08_27 second round of cleaning. If you plan to use this design, DO NOT connect pin 10 of the Darlington arrays, leave that pin floating.
- 2017_07_18 cleanup. Hardware works with pin 10 NC. Uploading arduino firmware for seven segment and 4x4 displays.
- 2017_07_04 remove COM to GND connection in v1 (pin 10 NC). Other than that v1 works.
