int getLampBrightness(bool switchOn, int brightnessSetting);

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println(" Laboratory Activity 2 Results ");

  runTest(true, 0);
  runTest(true, 50);
  runTest(true, 100);

  runTest(false, 0);
  runTest(false, 50);
  runTest(false, 100);
}

void loop() {
}

int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void runTest(bool switchOn, int brightnessSetting) {
  int lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  
  Serial.print("Brightness setting: ");
  Serial.print(brightnessSetting);
  Serial.print(" | Switch: ");
  Serial.print(switchOn ? "true " : "false");
  Serial.print(" -> Lamp brightness: ");
  Serial.println(lampBrightness);
}