#include <zephyr.h>
#include <sys/printk.h>
#include <device.h>
#include <drivers/pwm.h>

#error there
void main(void)
{

	printk("PWM-based blinky\n");


	/*
	 * In case the default MAX_PERIOD value cannot be set for
	 * some PWM hardware, decrease its value until it can.
	 *
	 * Keep its value at least MIN_PERIOD * 4 to make sure
	 * the sample changes frequency at least once.
	 */

	while (1) {
		printk("Error %d: failed to set pulse width\n", 42);

		k_sleep(K_SECONDS(4U));
	}
}