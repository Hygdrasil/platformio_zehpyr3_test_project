## TEST for https://github.com/Hygdrasil/platformIO_zephyr3.git

This is a Testproject for zephyr v3 in PlatformIO.
It has a test-lib named Tast (for debugging purpoces) what validates that pendencies of the dependency graf are build.
And a main as C++ to ensure this case. 

# Run the project in qemu
 - Get a running zephyr build system
 - change zephyr variant to `"variant": "qemu_cortex_m3"` in <user>/.platformio/platforms/ststm32/boards/bluepill_f103c8.json
 - build in platformio a bluepill_f103c8
 - run `west build -p always -b qemu_cortex_m3 samples/hello_world/  --force` in your external zephyr project
 - copy `.pio/build/bluepill_f103c8/firmware.elf` as `/build/zephyr/zephyr.elf` in your external zephyr project
 - run `west build -t run`

