// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "1c7afb94-f311-477a-8d7f-58775a8a5795";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onPlantChange();
void onAAddedChange();
void onBAddedChange();
void onHarvestChange();
void onNewPlantChange();
void onPhOverrideChange();
void onStartPlantChange();

float add_Nutrient;
float ec;
float ph_init;
int plant;
int t;
int water_flow;
bool a_added;
bool aC_Batt;
bool add_A;
bool add_B;
bool b_added;
bool harvest;
bool high_acid;
bool high_base;
bool high_Nutrient;
bool low_Nutrient;
bool low_water;
bool new_plant;
bool phok;
bool ph_override;
bool system_Ready;
bool test;
bool water_flow_bool;
CloudTime start_plant;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(add_Nutrient, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(ec, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(ph_init, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(plant, READWRITE, 1 * SECONDS, onPlantChange);
  ArduinoCloud.addProperty(t, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(water_flow, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(a_added, READWRITE, ON_CHANGE, onAAddedChange);
  ArduinoCloud.addProperty(aC_Batt, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(add_A, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(add_B, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(b_added, READWRITE, ON_CHANGE, onBAddedChange);
  ArduinoCloud.addProperty(harvest, READWRITE, ON_CHANGE, onHarvestChange);
  ArduinoCloud.addProperty(high_acid, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(high_base, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(high_Nutrient, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(low_Nutrient, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(low_water, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(new_plant, READWRITE, ON_CHANGE, onNewPlantChange);
  ArduinoCloud.addProperty(phok, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(ph_override, READWRITE, ON_CHANGE, onPhOverrideChange);
  ArduinoCloud.addProperty(system_Ready, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(test, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(water_flow_bool, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(start_plant, READWRITE, 1 * SECONDS, onStartPlantChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
