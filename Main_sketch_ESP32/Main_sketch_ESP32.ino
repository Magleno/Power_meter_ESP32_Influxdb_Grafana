#include <InfluxDbClient.h>
#include <EmonLib.h>
#include <WiFiMulti.h>
WiFiMulti wifiMulti;
#define DEVICE "ESP32"

#include <InfluxDbClient.h>

// WiFi AP SSID
#define WIFI_SSID "Bbox-D829F859"
// WiFi password
#define WIFI_PASSWORD "Shipman56570"
// InfluxDB  server url. Don't use localhost, always server name or ip address.
// E.g. http://192.168.1.48:8086 
#define INFLUXDB_URL "http://192.168.1.9:8086"
// InfluxDB v1 database name 
#define INFLUXDB_DB_NAME "home"

// InfluxDB client instance
InfluxDBClient client(INFLUXDB_URL, INFLUXDB_ORG, INFLUXDB_BUCKET, INFLUXDB_TOKEN);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
