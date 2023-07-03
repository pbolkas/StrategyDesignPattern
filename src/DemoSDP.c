/*
 * TemperatureSensor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: pablo
 */

#include <stdio.h>
#include <stdlib.h>
#include "./SensorManager.h"

int main(void)
{

  setSensor(TEMPERATURE);
  int value = readSensorData();
  printf("Value is %d \n", value);

  setSensor(HUMIDITY);
  value = readSensorData();
  printf("Value is %d \n", value);

  return 0;
}
