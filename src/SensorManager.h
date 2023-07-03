/*
 * SensorManager.h
 *
 *  Created on: Jul 2, 2023
 *      Author: pablo
 */

#ifndef SENSORMANAGER_H_
#define SENSORMANAGER_H_

typedef int (*readSensorValue)();

typedef enum
{
  TEMPERATURE,
  HUMIDITY
} SensorType;

void setReadSensorValue(readSensorValue);
readSensorValue readSensorData();
void setSensor(SensorType);

#endif /* SENSORMANAGER_H_ */
