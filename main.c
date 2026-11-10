#include <stdio.h>
/// jo man kan ik 3 gb ram van jouw krijgen. hierop krijg je een koekie. ik wil wle ddr5 ram 
/*This is a branch comment*/
int main(void)
{
    xTaskCreate(
		TaskA,		// task pointer/function
		"name",		// task name
		256,		// stack size
		NULL,		// thread parameter
		1,			// prio
		NULL		// task handle
	);

	xTaskCreate(
		TaskB,		// task pointer/function
		"Task B",	// task name
		128,		// stack size
		NULL,		// thread parameter
		1,			// prio
		NULL		// task handle
	);

	while (1) {
		print("loop!");
		vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second
	}
}

	
// Gaat dit werken??
// blijkbaar werkt het gewoon