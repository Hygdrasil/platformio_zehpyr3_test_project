#include "tast.h"
//#include <zephyr/kernel.h>
//#include <zephyr/drivers/gpio.h>
//#include <zephyr/devicetree.h>

int tast()
{
	return 34;
}
#if 0
/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

/* The devicetree node identifier for the "led0" alias. */
#define LED0_NODE DT_ALIAS(led0)

/*
 * A build error on this line means your board is unsupported.
 * See the sample documentation for information on how to fix this.
 */
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

int tast()
{
	int ret;

	if (!device_is_ready(led.port)) {
		return - 1;
	}

	ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return - 2;
	}

	while (1) {
		ret = gpio_pin_toggle_dt(&led);
		if (ret < 0) {
			return - 3;
		}
		k_msleep(SLEEP_TIME_MS);
	}
}
#endif