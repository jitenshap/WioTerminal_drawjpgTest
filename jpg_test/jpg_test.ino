#include <LovyanGFX.hpp>
#include "src/image.h"
static LGFX lcd;
static LGFX_Sprite sprite(&lcd);

void setup(void)
{
  lcd.init();
  lcd.setRotation(1);
  lcd.setBrightness(255);
  lcd.setColorDepth(24);
  lcd.clear();
  lcd.setCursor(10,10);
  lcd.print("Hello LovyanGFX");
  //69*43のJPEGを等倍で(20,20)に切り取りなしで表示
  //jpegバイナリポインタ, jpegファイルlength, 開始座標x, y, 最大幅x, y, オフセットx, y, スケール(jpeg_div_t)
  lcd.drawJpg(loadjpg, sizeof(loadjpg) / sizeof(byte), 20, 20, 69, 43 ,0, 0, JPEG_DIV_NONE);
}

void loop(void)
{

}
