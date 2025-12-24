#define BIN_HEIGHT 70.0
void loop() {
  float distance = 15.0;  // exapmle ultrasonic reading
  float fill = (BIN_HEIGHT - distance) / BIN_HEIGHT * 100;

  if (fill > 80) {
    // transmit data
  }
  // deep sleep
}
