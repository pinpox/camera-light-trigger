arduino-cli compile --fqbn arduino:avr:nano Main
arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:nano:cpu=atmega328old  Main
