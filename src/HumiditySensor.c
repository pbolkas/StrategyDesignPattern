/*
 * HumiditySensor.c
 *
 *  Created on: Jul 2, 2023
 *      Author: pablo
 */

#include "./HumiditySensor.h"
#include "./SensorManager.h"

readSensorValue readHumidity();

void setHumiditySensor()
{
  setReadSensorValue(readHumidity);
}

readSensorValue readHumidity()
{
  return 55;
}
