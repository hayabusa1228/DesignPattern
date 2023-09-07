#include <string>
#include "ListFactory.hpp"
int main(){
  Factory* factory = new ListFactory();
  Link* asahi = factory->createLink("朝日新聞","http://www.asahi.com");
  Link* yomiuri = factory->createLink("読売新聞","http://www.yomiuri.com");
  Tray* tray_news = factory->createTray("新聞");
  tray_news->add(asahi);
  tray_news->add(yomiuri);
  Page* page = factory->createPage("LinkPage","Hayato");
  page->add(tray_news);
  page->output();
}