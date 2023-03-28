#pragma once

#include "Bar.h"

namespace Codingfield {
  namespace UI {
    class StatusBar : public Bar {
    public:
      enum class WifiStatuses {Unknown, No_signal, Weak, Medium, Full};
      StatusBar() : Bar() {}
      StatusBar(Widget* parent, Point position, int32_t height) : Bar(parent, position, height) {}
      void Draw() override;
      
      void SetIP(const std::string& t);

    private:
      Color color = WHITE;
      std::string ip_addr, old_ip_addr;
    };
  }
}
