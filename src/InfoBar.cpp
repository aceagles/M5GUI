#include "InfoBar.h"

using namespace Codingfield::UI;





void StatusBar::SetIP(const std::string& t) {
  ip_addr = t;
}

void StatusBar::Draw() {
  if(IsHidden()) return;
  bool wasInvalidated = isInvalidated;
  Bar::Draw();


  if(wasInvalidated || (old_ip_addr != ip_addr)) {
    M5.Lcd.setTextDatum(TL_DATUM);

    M5.Lcd.setTextColor(color);
    String s = String(ip_addr);
    M5.Lcd.drawString(s.c_str(), 1, 5);

    old_ip_addr = ip_addr;
  }
  isInvalidated = false;
}
