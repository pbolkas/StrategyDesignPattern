/*
 * SensorManager.c
 *
 *  Created on: Jul 2, 2023
 *      Author: pablo
 */

#include "./SensorManager.h"
#include "./TemperatureSensor.h"
#include "./HumiditySensor.h"

readSensorValue readValueFunction;

void setReadSensorValue(readSensorValue valueReadHandler)
{
  readValueFunction = valueReadHandler;
}

readSensorValue readSensorData()
{
  return readValueFunction();
}

void setSensor(SensorType type)
{
	switch(type){
	case(TEMPERATURE):{
		setTemperatureSensor();
		break;
	}
	case(HUMIDITY):{
		setHumiditySensor();
		break;
	}
	}
}
