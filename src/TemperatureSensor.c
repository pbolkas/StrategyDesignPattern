/*
 * TemperatureSensor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: pablo
 */

#include "./TemperatureSensor.h"
#include "./SensorManager.h"

readSensorValue readTemperature();

void setTemperatureSensor()
{
  setReadSensorValue(readTemperature);
}

readSensorValue readTemperature()
{
  return 15;
}
