Intro
=====
Ever wanted a bossy watch that tells you what to do with supreme confidence and zero knowledge of your life? Now’s your chance. Press the bottom-left button to receive a daily edict.

(Long-press on the bottom-left button will show you the config-watch-face)

Second Movement
===============
[Sensor Watch](https://www.sensorwatch.net) by [Oddly Specific Objects](https://www.oddlyspecificobjects.com/) is an ARM Cortex M0+ board swap for the classic Casio F-91W wristwatch.

This is a fork of the Community Firmware. 

It adds the **not-so-oblique-strategies** watch face.

It also adds a few customisations in movement_config.h, putting the focus on the *Sensor Watch Pro* and the *Custom Display*. If you want to use this watch face in another setup, adopt the config file accordingly.

![Sensor Watch Pro in the CASIO F-91W showing a text: feed soul](/demo.jpg?raw=true "feed soul")

Getting dependencies
-------------------------
Install the arm cross-compiling toolchain on your system: https://www.sensorwatch.net/docs/movement/building/

Get the git submodules: `git submodule update --init --recursive`


Building Second Movement
----------------------------
You can build the default watch firmware with:

```
make 
```

If you'd like to modify which faces are built and included in the firmware, edit `movement_config.h`. You will get a compilation error if you enable more faces than the watch can store.

Installing firmware to the watch
----------------------------
To install the firmware onto your Sensor Watch board, plug the watch into your USB port and double tap the tiny Reset button on the back of the board. You should see the LED light up red and begin pulsing. (If it does not, make sure you didn’t plug the board in upside down). Once you see the `WATCHBOOT` drive appear on your desktop, type `make install`. This will convert your compiled program to a UF2 file, and copy it over to the watch.

If you want to do this step manually, copy `/build/firmware.uf2` to your watch. 


Emulating the firmware
----------------------------
You may want to test out changes in the emulator first. To do this, you'll need to install [emscripten](https://emscripten.org/), then run:

```
emmake make BOARD=sensorwatch_red DISPLAY=classic
python3 -m http.server -d build-sim
```

Finally, visit [firmware.html](http://localhost:8000/firmware.html) to see your work.
