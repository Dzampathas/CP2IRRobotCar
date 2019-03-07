int irCheck(boolean Send){
  int value = 0x00;
  if (irrecv.decode(&results)) {
    if(Send){
      Serial.println(results.value, HEX);
    }
    value = results.value;
    irrecv.resume(); // Receive the next value
  }
  return(value);
  delay(100);
}

