// ================================================================
// ===                      INITIAL SETUP                       ===
// ================================================================

void setup() {
  IMUsetup();
}



// ================================================================
// ===                    MAIN PROGRAM LOOP                     ===
// ================================================================

void loop() {
  float imuresult = IMUloop();
  Serial.println(imuresult);
}
