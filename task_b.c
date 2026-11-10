#include "stdio.h"

#define SENSOR_NUM 6

void TaskB(void *pvParameters) {
	int *value = (int *)pvParameters;
	int status = READY;

	char critical_error = 0;

	for (;;) {
		critical_error = get_sensor_reading(SENSOR_NUM);
		if (critical_error) {
			xQueueSend(xErrorQueue, &status, 10);
			vTaskDelete(NULL); 
		}

		vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second
	}
}
gaat dit dan werken??