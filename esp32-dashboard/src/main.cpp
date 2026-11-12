#include <Arduino.h>
#include <WiFi.h>
#include <Firebase_ESP_Client.h>
#include <AceButton.h>

using namespace ace_button;

// Wi-Fi Configuration
const char* ssid = "HUAWEI-8XqS";
const char* password = "PnDgsv5S";

// Firebase Configuration
#define API_KEY "AIzaSyCsZjbqBm1AG5pTBWeuaxMbFS2zuPwdkEo"
#define DATABASE_URL "https://esp32testing-9ae08-default-rtdb.firebaseio.com/
"
#define USER_EMAIL "lockeradmin1@gmail.com"
#define USER_PASSWORD "lockeradmin123"