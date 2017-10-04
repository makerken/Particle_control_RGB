# Particle_control_RGB

This is a simple example of JavaScript

##Used in the Particle code:
copy-paste the .ino into an application in the Particle IDE
[Particle Function](https://docs.particle.io/reference/firmware/photon/#particle-function-)
[Particle Publish](https://docs.particle.io/reference/firmware/photon/#particle-publish-)
[Control the on board RGB LED](https://docs.particle.io/reference/firmware/photon/#rgb)
The website calls the particle function and passes it the string as an argument to the function
A loop inside the function iterates i over each letter in the string, value[i]

`if(value[i] == "_")`:
Error: ISO C++ forbids comparison between pointer and integer
[Pointers](http://www.c4learn.com/cplusplus/cpp-pointer-operator/)
The value is a String, value[i] is treated as an integer, but one of a few things I tried worked

##Used in the Website
save the .html file and right-click > edit and enter your details
[Find your Access Token and Device ID](https://docs.particle.io/guide/getting-started/build/photon/#account-information)
[Color picker](http://jscolor.com)
[Simple post function](https://api.jquery.com/jQuery.post/)

You can use jscolor to submit a form, and not include jQuery, but I think defining the Access Token and Device ID is cleaner.

Color accuracy is bad, and it is not something this is concerned with. Controlling LED strip lights it is much better.
This has been tested on the Particle Photon
